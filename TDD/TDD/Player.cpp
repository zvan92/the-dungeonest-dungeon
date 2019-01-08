#include "pch.h"
#include "Player.h"


Player::Player(string name)
{
	Player::name = name;
	Player::health = 100;
	Player::damage = 25;
}


Player::~Player()
{
}
