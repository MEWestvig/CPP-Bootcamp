#include <iostream>
#include <curses.h>
#include "../includes/GameEnviroment.hpp"
#include "../includes/Enemy.hpp"

GameEnviroment::GameEnviroment()
{
	return;
}
GameEnviroment::~GameEnviroment(void)
{
	return;
}
GameEnviroment::GameEnviroment (GameEnviroment const &src)
{
	*this = src;
	return;
}
GameEnviroment &GameEnviroment::operator=(GameEnviroment const &rhs)
{
	if (this != &rhs)
	{
		return (*this);
	}
	return (*this);
}
void GameEnviroment::initScreen()
{
	/* initialize curses */
	initscr();
	keypad(stdscr, TRUE);
	cbreak();
	noecho();
	clear();
}
Enemy * GameEnviroment::drawMap()
{
	int y, x = 0;

	Enemy *badGuy = new Enemy[20];
	for (int i = 0; i <= 20; i++)
	{
		srand(time(0) % rand() * rand() % 1223456);
		badGuy[i].setX((rand() % ((COLS / 4) - 2)) + 1);
		badGuy[i].setY(rand() % 4 + 1);
	}
	for (y = 0; y < LINES; y++) {
		mvhline(y, 0, BLANK, COLS);
	}
	/* Borders */
	mvvline(0, x, WALL, LINES);
	mvvline(0, COLS / 4 + 1, WALL, LINES);
	//Swarm Top
	for(x = COLS / 4; x > 0; x--)
	mvvline(0, x, '%', 1);
	//Bottom
	for(x = COLS / 4; x > 0; x--)
	mvvline(LINES - 1, x, '=', 1);
	return (badGuy);
}

void GameEnviroment::gameOver()
{
	clear();
	addstr(" _____   ___  ___  ___ _____   _____  _   _ ___________\n");
	addstr("|  __ \\ / _ \\ |  \\/  ||  ___| |  _  || | | |  ___| ___ \\\n");
	addstr("| |  \\// /_\\ \\| .  . || |__   | | | || | | | |__ | |_/ /\n");
	addstr("| | __ |  _  || |\\/| ||  __|  | | | || | | |  __||    / \n");
	addstr("| |_\\ \\| | | || |  | || |___  \\ \\_/ /\\ \\_/ / |___| |\\ \\ \n");
	addstr(" \\____/\\_| |_/\\_|  |_/\\____/   \\___/  \\___/\\____/\\_| \\_|\n");
	addstr("\n\n\n");
	addstr("Press q to exit\n");
}
