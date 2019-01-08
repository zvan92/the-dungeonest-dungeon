#include "pch.h"
#include "Player.h"


Player::Player(string name, int position)
{
	Player::name = name;
	Player::health = 100;
	Player::damage = 25;
	Player::position = position;
}


Player::~Player()
{
}
