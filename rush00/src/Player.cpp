#include <iostream>
#include <curses.h>
#include "../includes/GameEnviroment.hpp"
#include "../includes/Player.hpp"

Player::Player()
{
	setX((COLS / 4) / 2);
	setY(LINES - 2);
	playerSym = PLAYER;
	return ;
}
Player::~Player()
{
	return ;
}
Player::Player(const Player &player)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = player;
}
Player &Player::operator=(Player const &rhs)
{
	if (this != &rhs)
	{
		return (*this);
	}
	return (*this);
}
void    Player::drawPlayer()
{
	mvaddch(this->playerY, this->playerX, PLAYER);
}
void    Player::drawKills()
{
	mvprintw(10, ((COLS / 4) + 3), "Kills: %d", this->_kills);
}
void Player::setX(int x)
{
	this->playerX = x;
}
void Player::setY(int y)
{
	this->playerY = y;
}
int Player::getX()
{
	return (this->playerX);
}
int Player::getY()
{
	return (this->playerY);
}
void Player::setKills(int kills)
{
	this->_kills = kills;
}
int Player::getKills()
{
	return (this->_kills);
}
