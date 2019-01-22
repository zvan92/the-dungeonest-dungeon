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
	// attack if a player is nearby
	bool playerTurn = BoardManager::getInstance()->getPTurn();
	int playerAPos;
	int playerBPos;
	char pX;

	if (!playerTurn)
	{
		playerAPos = BoardManager::getInstance()->getPlayerAPos();
		pX = 'A';
		playerBPos = BoardManager::getInstance()->getPlayerBPos();
	}
	else
	{
		playerBPos = BoardManager::getInstance()->getPlayerBPos();
		pX = 'B';
		playerAPos = BoardManager::getInstance()->getPlayerAPos();
	}
}


void Player::Move()
{
	bool playerTurn = BoardManager::getInstance()->getPTurn();
	int playerPos;
	char moveDir;
	char pX;

	if (!playerTurn)
	{
		playerPos = BoardManager::getInstance()->getPlayerAPos();
		pX = 'A';
	}
	else
	{
		playerPos = BoardManager::getInstance()->getPlayerBPos();
		pX = 'B';
	}

	cout << "Where would you like to go?: ";
	cin >> moveDir;
	if (moveDir == 'n' || moveDir == 'e' || moveDir == 's' || moveDir == 'w'/* || moveDir != 'c'*/)
	{
		// move position based on a passed in direction value
		switch (playerPos)
		{
		case 0:
			if (moveDir == 'e')
			{
				BoardManager::getInstance()->setPlayerPos(1, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(1);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(1);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				BoardManager::getInstance()->setPlayerPos(3, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(3);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(3);
				EndTurn();
				break;
			}
			else
			{
				cout << "\n\nInvalid Direction.\n\n";
				break;
			}
		case 1:
			if (moveDir == 'e')
			{
				BoardManager::getInstance()->setPlayerPos(2, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(2);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(2);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				BoardManager::getInstance()->setPlayerPos(4, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(4);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(4);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				BoardManager::getInstance()->setPlayerPos(0, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(0);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(0);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 2:
			if (moveDir == 'w')
			{
				BoardManager::getInstance()->setPlayerPos(1, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(1);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(1);
				EndTurn();
				break;
			}
			if (moveDir =='s')
			{
				BoardManager::getInstance()->setPlayerPos(5, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(5);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(5);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 3:
			if (moveDir == 'n')
			{
				BoardManager::getInstance()->setPlayerPos(0, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(0);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(0);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				BoardManager::getInstance()->setPlayerPos(6, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(6);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(6);
				EndTurn();
				break;
			}
			if (moveDir == 'e')
			{
				BoardManager::getInstance()->setPlayerPos(4, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(4);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(4);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 4:
			if (moveDir == 'n')
			{
				BoardManager::getInstance()->setPlayerPos(1, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(1);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(1);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				BoardManager::getInstance()->setPlayerPos(7, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(7);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(7);
				EndTurn();
				break;
			}
			if (moveDir == 'e')
			{
				BoardManager::getInstance()->setPlayerPos(5, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(5);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(5);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				BoardManager::getInstance()->setPlayerPos(3, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(3);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(3);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 5:
			if (moveDir == 'n')
			{
				BoardManager::getInstance()->setPlayerPos(2, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(2);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(2);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				BoardManager::getInstance()->setPlayerPos(8, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(8);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(8);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				BoardManager::getInstance()->setPlayerPos(4, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(4);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(4);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 6:
			if (moveDir == 'n')
			{
				BoardManager::getInstance()->setPlayerPos(3, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(3);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(3);
				EndTurn();
				break;
			}
			if (moveDir == 'e')
			{
				BoardManager::getInstance()->setPlayerPos(7, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(7);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(7);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 7:
			if (moveDir == 'n')
			{
				BoardManager::getInstance()->setPlayerPos(4, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(4);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(4);
				EndTurn();
				break;
			}
			if (moveDir == 'e')
			{
				BoardManager::getInstance()->setPlayerPos(8, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(8);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(8);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				BoardManager::getInstance()->setPlayerPos(6, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(6);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(6);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 8:
			if (moveDir == 'n')
			{
				BoardManager::getInstance()->setPlayerPos(5, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(5);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(5);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				BoardManager::getInstance()->setPlayerPos(7, pX);
				if (pX == 'A')
					BoardManager::getInstance()->setPlayerAPos(7);
				if (pX == 'B')
					BoardManager::getInstance()->setPlayerBPos(7);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		}
	}
	else
		cout << "\n\nInvalid Direction.\n\n";
}


void Player::EndTurn()
{
	// end turn
	system("CLS");
	BoardManager::getInstance()->PlayerTurn();
	BoardManager::getInstance()->DisplayBoard();
}
