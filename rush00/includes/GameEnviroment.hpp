#ifndef GAMEENVIROMENT_HPP
 #define GAMEENVIROMENT_HPP

	#define WALL '|'
	#define SWARM '&'
	#define BOTTOM '-'
	#define BLANK ' '
	#define PLAYER 'M'
	#define ENEMY '#'
	#define BULLET '|'

	#include <ncurses.h>
	#include <curses.h>
	#include "Enemy.hpp"
	#include "Player.hpp"

	class GameEnviroment
	{
		private:

		public:
			GameEnviroment(void);
			~GameEnviroment(void);
			GameEnviroment(GameEnviroment const &src);
			GameEnviroment &operator=(GameEnviroment const &rhs);
			void initScreen();
			Enemy * drawMap();
			void gameOver();
	};
 #endif
