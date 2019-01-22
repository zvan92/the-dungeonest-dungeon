#include "pch.h"
#include "Player.h"
#include "BoardManager.h"

Player::Player()
{
}


Player::~Player()
{
}

void Player::Attack()
{
	//int n = GetPlayerPositions();
	// attack if a player is nearby
	/*switch (n)
	{

	}*/
}


void Player::Move()
{
	//GameManager::getInstance()->StartPlayerTurn();
	// move position based on a passed in direction value

}


void Player::EndTurn()
{
	// end turn
	system("CLS");
	BoardManager::getInstance()->DisplayBoard();
}
