/* quest.c */

#include <curses.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <time.h>

#include "../includes/GameEnviroment.hpp"
#include "../includes/Player.hpp"
#include "../includes/Enemy.hpp"

int is_move_okay(int y, int x, Enemy *badGuy, GameEnviroment Game);
void draw_map(void);

int kbhit(void)
{
	int ch, r;

	nodelay(stdscr, TRUE);
	noecho();
	ch = getch();
	if (ch == ERR)
	r = FALSE;
	else
	{
		r = TRUE;
		ungetch(ch);
	}
	echo();
	nodelay(stdscr, FALSE);
	return r;
}

int main(void)
{
	int y, x;
	int ch;
	bool laser_on;
	int kills;
	GameEnviroment Game;
	time_t startTime = time(0);

	//Initialize Screen
	Game.initScreen();

	// Initialize MAP
	Enemy *badGuy = Game.drawMap();

	y = LINES - 2;
	int laser_height = 40 - 2;
	x = 20;
	int moveCounter = 0;

	Player Hero;
	kills = 0;
	Hero.setKills(0);
	do {
		Hero.drawPlayer();
		Hero.drawKills();
		mvprintw(11, ((COLS / 4) + 3), "Time Survived: %d", time(0)-startTime);
		for (int i = 0; i <= 20; i++)
		badGuy[i].drawEnemy();
		if (moveCounter % 50000 == 0)
		{
			for (int i = 0; i  <= 20; i++)
			{
				badGuy[i].moveEnemy();
				badGuy[i].drawEnemy();
			}
			moveCounter = 0;
		}
		move(Hero.getY(), Hero.getX());
		refresh();
		if (kbhit()){
			ch = getch();

			switch (ch) {
				case KEY_LEFT:
				case 'a':
				case 'A':
				if ((Hero.getX() > 1) && is_move_okay(Hero.getY(), Hero.getX() - 1, badGuy, Game)) {
					mvaddch(Hero.getY(), Hero.getX(), BLANK);
					Hero.setX(Hero.getX() - 1);
				}
				if(laser_on)
				{
					for ( int laser = 40 - 2; laser > laser_height + 1; laser--)
					{
						mvaddch(laser, Hero.getX() + 1, ' ');
					}
					laser_height = 40 - 2;
					laser_on = FALSE;
				}
				break;
				case KEY_RIGHT:
				case 'd':
				case 'D':
				if (((Hero.getX() < COLS / 4) && is_move_okay(Hero.getY(), Hero.getX() + 1, badGuy, Game))) {
					mvaddch(Hero.getY(), Hero.getX(), BLANK);
					Hero.setX(Hero.getX() + 1);
				}if(laser_on)
				{
					for ( int laser = 40 - 2; laser > laser_height + 1; laser--)
					{
						mvaddch(laser, Hero.getX() - 1, ' ');
					}
					laser_height = 40 - 2;
					laser_on = FALSE;
				}
				break;
				case ' ':
				if ((Hero.getX() < COLS - 1) && is_move_okay(Hero.getY(), Hero.getX() + 1, badGuy, Game)) {
					int breaking = 0;
					for ( int laser = 40 - 2; laser > 0; laser--)
					{
						for (int i = 0; i <= 20; i++)
						{
							if (badGuy[i].getX() == Hero.getX() && (badGuy[i].getY()) == laser)
							{
								kills++;
								Hero.setKills(kills);
								badGuy[i].setY(1);
								breaking = 1;
								break;
							}
						}
						if (breaking == 1)
						{
							laser_height-= 2;
							break;
						}
						laser_height--;
						if (laser_height > 0)
						{
							mvaddch(laser, Hero.getX(), 'I');
							laser_on = TRUE;
						}
					}
					break ;
				}
			}
		}
		moveCounter++;
		for (int i = 0; i <= 20; i++)
		{
			if (badGuy[i].getX() == Hero.getX() && (badGuy[i].getY()) == Hero.getY())
			{
				for (int j = 0; j <= 20; j++)
				{
					badGuy[j].setX(-1);
					badGuy[j].setY(-1);
				}
				Game.gameOver();
			}
		}
	}
	while ((ch != 'q') && (ch != 'Q'));

	endwin();
	exit(0);
}

int is_move_okay(int y, int x, Enemy *badGuy, GameEnviroment Game)
{
	int testch;

	for (int i = 0; i <= 20; i++)
	{
		if (badGuy[i].getX() == x && (badGuy[i].getY()) == y)
		{
			for (int j = 0; j <= 20; j++)
			{
				badGuy[j].setX(-1);
				badGuy[j].setY(-1);
			}
			Game.gameOver();
		}
	}
	testch = mvinch(y, x);
	if (testch == BLANK || testch == BULLET || testch == '=')
	return (1);
	else
	return 0;
}
