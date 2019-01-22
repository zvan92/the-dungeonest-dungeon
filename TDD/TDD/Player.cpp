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
	if (moveDir != 'n' || moveDir != 'e' || moveDir != 's' || moveDir != 'w'/* || moveDir != 'c'*/)
		cout << "\n\nInvalid Direction.\n\n";
	else
	{
		switch (playerPos)
		{
		case 0:
			if (moveDir = 'e')
			{
				BoardManager::getInstance()->setPlayerPos(1, pX);
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->setPlayerPos(3, pX);
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 1:
			if (moveDir = 'e')
			{
				BoardManager::getInstance()->setPlayerPos(2, pX);
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->setPlayerPos(4, pX);
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->setPlayerPos(0, pX);
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 2:
			if (moveDir = 'w')
			{
				BoardManager::getInstance()->setPlayerPos(1, pX);
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->setPlayerPos(5, pX);
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 3:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->setPlayerPos(0, pX);
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->setPlayerPos(6, pX);
				EndTurn();
			}
			else if (moveDir = 'e')
			{
				BoardManager::getInstance()->setPlayerPos(4, pX);
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 4:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->setPlayerPos(1, pX);
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->setPlayerPos(7, pX);
				EndTurn();
			}
			else if (moveDir = 'e')
			{
				BoardManager::getInstance()->setPlayerPos(5, pX);
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->setPlayerPos(3, pX);
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 5:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->setPlayerPos(2, pX);
				EndTurn();
			}
			else if (moveDir = 's')
			{
				BoardManager::getInstance()->setPlayerPos(8, pX);
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->setPlayerPos(4, pX);
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 6:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->setPlayerPos(3, pX);
				EndTurn();
			}
			else if (moveDir = 'e')
			{
				BoardManager::getInstance()->setPlayerPos(7, pX);
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 7:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->setPlayerPos(4, pX);
				EndTurn();
			}
			else if (moveDir = 'e')
			{
				BoardManager::getInstance()->setPlayerPos(8, pX);
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->setPlayerPos(6, pX);
				EndTurn();
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 8:
			if (moveDir = 'n')
			{
				BoardManager::getInstance()->setPlayerPos(5, pX);
				EndTurn();
			}
			else if (moveDir = 'w')
			{
				BoardManager::getInstance()->setPlayerPos(7, pX);
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
