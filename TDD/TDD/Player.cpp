#include "pch.h"
#include "Player.h"
#include "GameManager.h"


Player::Player()
{
}


Player::~Player()
{
}

void Player::Attack()
{
	// attack if a player is nearby
}


void Player::Move()
{
	GameManager::getInstance()->StartPlayerTurn();
	// move position based on a passed in direction value
}


void Player::EndTurn()
{
	// end turn
}
