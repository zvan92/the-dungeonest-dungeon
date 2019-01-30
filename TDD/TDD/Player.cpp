#include "pch.h"
#include "Player.h"
#include "BoardManager.h"

Player::Player()
{
}


Player::~Player()
{
}

void Player::ExecuteAttack(int pX)
{
	int currentPlayer = pX;


}

void Player::Attack()
{
	// attack if a player is nearby
	bool playerTurn = BoardManager::getInstance()->getPTurn();
	int playerAPos;
	int playerBPos;
	char pX;
	bool canAttack = false;

	if (!playerTurn)
	{
		playerAPos = BoardManager::getInstance()->getPlayerAPos();
		pX = 'A';
		playerBPos = BoardManager::getInstance()->getPlayerBPos();

		switch (playerAPos)
		{
		case 0:
			if (playerBPos == 1)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 3)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 1:
			if (playerBPos == 0)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 2)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 4)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 2:
			if (playerBPos == 1)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 5)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 3:
			if (playerBPos == 0)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 4)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 6)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 4:
			if (playerBPos == 1)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 3)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 5)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 7)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 5:
			if (playerBPos == 4)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 2)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 8)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 6:
			if (playerBPos == 3)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 7)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 7:
			if (playerBPos == 4)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 6)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 8)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 8:
			if (playerBPos == 5)
			{
				Player::ExecuteAttack('A');
			}
			if (playerBPos == 7)
			{
				Player::ExecuteAttack('A');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		}
	}
	if (playerTurn)
	{
		playerBPos = BoardManager::getInstance()->getPlayerBPos();
		pX = 'B';
		playerAPos = BoardManager::getInstance()->getPlayerAPos();

		switch (playerBPos)
		{
		case 0:
			if (playerAPos == 1)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 3)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 1:
			if (playerAPos == 0)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 2)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 4)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 2:
			if (playerAPos == 1)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 5)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 3:
			if (playerAPos == 0)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 4)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 6)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 4:
			if (playerAPos == 1)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 3)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 5)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 7)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 5:
			if (playerAPos == 4)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 2)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 8)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 6:
			if (playerAPos == 3)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 7)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 7:
			if (playerAPos == 4)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 6)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 8)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		case 8:
			if (playerAPos == 5)
			{
				Player::ExecuteAttack('B');
			}
			if (playerAPos == 7)
			{
				Player::ExecuteAttack('B');
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
			}
		}
	}
}

void Player::ExecuteMove(int pos, char player)
{
	int cPos;

	if (player == 'A')
	{
		cPos = BoardManager::getInstance()->getPlayerAPos();
	}
		
	if (player == 'B')
	{
		cPos = BoardManager::getInstance()->getPlayerBPos();
	}
	
	BoardManager::getInstance()->setPlayerPos(pos, player);
	if (player == 'A')
	{
		BoardManager::getInstance()->setPlayerAPos(pos);
	}
		
	if (player == 'B')
	{
		BoardManager::getInstance()->setPlayerBPos(pos);
	}
		
	if (BoardManager::getInstance()->checkCollision() == false)
	{
		canMove = true;
	}

	if (BoardManager::getInstance()->checkCollision() == true)
	{
		cout << "You can't move into an occupied position.\n\n";
		system("PAUSE");
		if (player == 'A')
		{
			pos = cPos;
			BoardManager::getInstance()->setPlayerAPos(pos);
		}
		if (player == 'B')
		{
			pos = cPos;
			BoardManager::getInstance()->setPlayerBPos(pos);
		}
	}
	
}

void Player::Move()
{
	bool playerTurn = BoardManager::getInstance()->getPTurn();
	int playerPos;
	char moveDir;
	char pX;
	canMove = false;

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
	if (moveDir == 'n' || moveDir == 'e' || moveDir == 's' || moveDir == 'w')
	{
		// move position based on a passed in direction value
		switch (playerPos)
		{
		case 0:
			if (moveDir == 'e')
			{
				ExecuteMove(1, pX);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				ExecuteMove(3, pX);
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
				ExecuteMove(2, pX);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				ExecuteMove(4, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				ExecuteMove(0, pX);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 2:
			if (moveDir == 'w')
			{
				ExecuteMove(1, pX);
				EndTurn();
				break;
			}
			if (moveDir =='s')
			{
				ExecuteMove(5, pX);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 3:
			if (moveDir == 'n')
			{
				ExecuteMove(0, pX);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				ExecuteMove(6, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'e')
			{
				ExecuteMove(4, pX);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 4:
			if (moveDir == 'n')
			{
				ExecuteMove(1, pX);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				ExecuteMove(7, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'e')
			{
				ExecuteMove(5, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				ExecuteMove(3, pX);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 5:
			if (moveDir == 'n')
			{
				ExecuteMove(2, pX);
				EndTurn();
				break;
			}
			if (moveDir == 's')
			{
				ExecuteMove(8, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				ExecuteMove(4, pX);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 6:
			if (moveDir == 'n')
			{
				ExecuteMove(3, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'e')
			{
				ExecuteMove(7, pX);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 7:
			if (moveDir == 'n')
			{
				ExecuteMove(4, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'e')
			{
				ExecuteMove(8, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				ExecuteMove(6, pX);
				EndTurn();
				break;
			}
			else
				cout << "\n\nInvalid Direction.\n\n";
		case 8:
			if (moveDir == 'n')
			{
				ExecuteMove(5, pX);
				EndTurn();
				break;
			}
			if (moveDir == 'w')
			{
				ExecuteMove(7, pX);
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
	if (getCanMove())
	{
		BoardManager::getInstance()->PlayerTurn();
	}
	BoardManager::getInstance()->DisplayBoard();
}
