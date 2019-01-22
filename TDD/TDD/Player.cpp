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
	bool pT = BoardManager::getInstance()->pTurn;
	int playerPos;
	char moveDir;

	if (!pT)
		playerPos = BoardManager::getInstance()->GetPlayerPositions('A');
	else
		playerPos = BoardManager::getInstance()->GetPlayerPositions('B');

	cout << "Where would you like to go?\n\n";
	cout << "Possible directions:\n";
	cin >> moveDir;
	switch (playerPos)
		case 0:
			if (moveDir = 'e')
			{
				BoardManager::getInstance()->playerPos[1] = 'A';
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->playerPos[3] = 'A';
				EndTurn();
			}
			else
				cout << "Invalid Direction.\n\n";
	// move position based on a passed in direction value
	

}


void Player::EndTurn()
{
	// end turn
	system("CLS");
	BoardManager::getInstance()->DisplayBoard();
}
