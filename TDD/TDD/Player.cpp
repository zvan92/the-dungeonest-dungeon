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
	int playerHP;
	int pDam = (rand() % 41);

	if (pX == 'A')
	{
		int playerHP = BoardManager::getInstance()->players[1].getHealth();
		playerHP -= pDam;
		BoardManager::getInstance()->players[1].setHealth(playerHP);
		cout << "Player B took " << pDam << " points of damage!" << endl;
		system("PAUSE");
		if (BoardManager::getInstance()->players[1].getHealth() <= 0)
		{
			BoardManager::getInstance()->GameOver();
			return;
		}
		else
		{
			EndTurn();
			return;
		}
	}

	if (pX == 'B')
	{
		int playerHP = BoardManager::getInstance()->players[0].getHealth();
		playerHP -= pDam;
		BoardManager::getInstance()->players[0].setHealth(playerHP);
		cout << "Player A took " << pDam << " points of damage!" << endl;
		system("PAUSE");
		if (BoardManager::getInstance()->players[0].getHealth() <= 0)
		{
			BoardManager::getInstance()->GameOver();
			return;
		}
		else
		{
			EndTurn();
			return;
		}
	}
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
				break;
			}
			if (playerBPos == 3)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 1:
			if (playerBPos == 0)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 2)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 4)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 2:
			if (playerBPos == 1)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 5)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 3:
			if (playerBPos == 0)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 4)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 6)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();

				break;
			}
		case 4:
			if (playerBPos == 1)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 3)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 5)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 7)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 5:
			if (playerBPos == 4)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 2)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 8)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 6:
			if (playerBPos == 3)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 7)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 7:
			if (playerBPos == 4)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 6)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 8)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 8:
			if (playerBPos == 5)
			{
				Player::ExecuteAttack('A');
				break;
			}
			if (playerBPos == 7)
			{
				Player::ExecuteAttack('A');
				break;
			}
			else
			{
				cout << "Player B is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
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
				break;
			}
			if (playerAPos == 3)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 1:
			if (playerAPos == 0)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 2)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 4)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 2:
			if (playerAPos == 1)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 5)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 3:
			if (playerAPos == 0)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 4)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 6)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 4:
			if (playerAPos == 1)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 3)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 5)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 7)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 5:
			if (playerAPos == 4)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 2)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 8)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 6:
			if (playerAPos == 3)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 7)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 7:
			if (playerAPos == 4)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 6)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 8)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		case 8:
			if (playerAPos == 5)
			{
				Player::ExecuteAttack('B');
				break;
			}
			if (playerAPos == 7)
			{
				Player::ExecuteAttack('B');
				break;
			}
			else
			{
				cout << "Player A is not in an adjacent tile.";
				system("pause");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
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
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
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
			{
				cout << "\n\nInvalid Direction.\n\n";
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
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
			{
				cout << "\n\nInvalid Direction.\n\n";
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
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
			{
				cout << "\n\nInvalid Direction.\n\n";
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
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
			{
				cout << "\n\nInvalid Direction.\n\n";
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
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
			{
				cout << "\n\nInvalid Direction.\n\n";
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
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
			{
				cout << "\n\nInvalid Direction.\n\n";
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
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
			{
				cout << "\n\nInvalid Direction.\n\n";
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
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
			{
				cout << "\n\nInvalid Direction.\n\n";
				system("PAUSE");
				system("cls");
				BoardManager::getInstance()->DisplayBoard();
				break;
			}
		}
	}
	else
	{
		cout << "\n\nInvalid Direction.\n\n";
		system("PAUSE");
		system("cls");
		BoardManager::getInstance()->DisplayBoard();
	}
}


void Player::EndTurn()
{
	// end turn
	system("CLS");
	if (getCanMove())
	{
		BoardManager::getInstance()->PlayerTurn();
	}
	//if (BoardManager::getInstance()->DisplayBoard() == 1)
	//{
	//	return;
	//}
}
