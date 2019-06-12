#include "../includes/Enemy.hpp"
#include "../includes/GameEnviroment.hpp"
#include <iostream>

Enemy::Enemy()
{
	return;
}
Enemy::Enemy(int N)
{
	N = N + 1;
	return ;
}
Enemy::~Enemy(void)
{
	return;
}
Enemy::Enemy (Enemy const &src)
{
	*this = src;
	return;
}
Enemy &Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		return (*this);
	}
	return (*this);
}
void Enemy::moveEnemy(void)
{
	mvaddch(this->_ypos, this->_xpos, BLANK);
	this->_ypos++;
	if (this->_ypos == LINES - 1)
	this->_ypos = 1;
}

void Enemy::drawEnemy()
{
	mvaddch(this->_ypos, this->_xpos, ENEMY);
}

void Enemy::setY(int y)
{
	this->_ypos = y;
}
void Enemy::setX(int x)
{
	this->_xpos = x;
}
int Enemy::getX()
{
	return (this->_xpos);
}
int Enemy::getY()
{
	return (this->_ypos);
}
void Enemy::setAlive()
{
	this->dead = 1;
}
