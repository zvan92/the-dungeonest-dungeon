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
	bool playerTurn = BoardManager::getInstance()->getPTurn();
	int playerPos;
	char moveDir;

	if (!playerTurn)
		playerPos = BoardManager::getInstance()->getPlayerAPos();
	else
		playerPos = BoardManager::getInstance()->getPlayerBPos();

	cout << "Where would you like to go?: ";
	cin >> moveDir;
	if (moveDir != 'n' || moveDir != 'e' || moveDir != 's' || moveDir != 'w' || moveDir != 'c')
		cout << "\n\nInvalid Direction.\n\n";
	else
	{
		switch (playerPos)
		{
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
				cout << "\n\nInvalid Direction.\n\n";
		case 1:
			if (moveDir = 'e')
			{
				BoardManager::getInstance()->playerPos[2] = 'A';
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->playerPos[4] = 'A';
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->playerPos[0] = 'A';
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 2:
			if (moveDir = 'w')
			{
				BoardManager::getInstance()->playerPos[1] = 'A';
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->playerPos[5] = 'A';
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 3:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->playerPos[0] = 'A';
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->playerPos[6] = 'A';
				EndTurn();
			}
			else if (moveDir = 'e')
			{
				BoardManager::getInstance()->playerPos[4] = 'A';
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 4:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->playerPos[1] = 'A';
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->playerPos[7] = 'A';
				EndTurn();
			}
			else if (moveDir = 'e')
			{
				BoardManager::getInstance()->playerPos[5] = 'A';
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->playerPos[3] = 'A';
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 5:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->playerPos[2] = 'A';
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->playerPos[8] = 'A';
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->playerPos[4] = 'A';
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 6:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->playerPos[3] = 'A';
				EndTurn();
			}
			else if (moveDir = 'e')
			{
				BoardManager::getInstance()->playerPos[7] = 'A';
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 7:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->playerPos[4] = 'A';
				EndTurn();
			}
			else if (moveDir = 'e')
			{
				BoardManager::getInstance()->playerPos[8] = 'A';
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->playerPos[6] = 'A';
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 8:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->playerPos[5] = 'A';
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->playerPos[7] = 'A';
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		}
	}
	// move position based on a passed in direction value
	

}


void Player::EndTurn()
{
	// end turn
	system("CLS");
	BoardManager::getInstance()->DisplayBoard();
}
