#include "pch.h"
#include <iostream>
#include "BoardManager.h"
#include "Init.h"

using namespace std;

BoardManager *BoardManager::instance = 0;

BoardManager::BoardManager()
{
}


BoardManager::~BoardManager()
{
}

void BoardManager::StartPlayerPositions()
{
	playerAPos = 0;
	playerBPos = 8;
}

bool BoardManager::checkCollision()
{
	if (playerAPos == playerBPos)
		return true;
	else
		return false;
}

void BoardManager::DisplayBoard()
{
	for (int i = 0; i < 9; i++)
	{
		if (playerAPos == i)
		{
			playerPos[i] = 'A';
		}
		if (playerBPos == i)
		{
			playerPos[i] = 'B';
		}
		if (playerAPos != i && playerBPos != i)
		{
			playerPos[i] = 'x';
		}
	}
	// Prints mapping out to screen
	cout << "You are in a dungeon. It's dark. What else is there\n to say? \n \n";
	cout << "\t" << playerPos[0] << "---------------" << playerPos[1] << "---------------" << playerPos[2] << "\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t" << playerPos[3] << "---------------" << playerPos[4] << "---------------" << playerPos[5] << "\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t" << playerPos[6] << "---------------" << playerPos[7] << "---------------" << playerPos[8] << "\n\n";
	cout << "\tA: " << players[0].getName() << "\t\t\tB: " << players[1].getName() << endl;
	cout << "\tHP: " << players[0].getHealth() << "\t\t\tHP: " << players[1].getHealth() << endl;
	cout << endl;
}

void BoardManager::PlayerTurn()
{
	pTurn = !pTurn;
}

int BoardManager::PlayerAction()
{
	if (gameIsRunning)
	{
		cout << "It's " << players[pTurn].getName() << "'s turn.\n\n";
		cout << "What would you like to do?\n\n";
		cout << "(A)ttack \n(M)ove \n(E)nd Turn \n\nYour choice: ";
		cin >> playerAction;
		if (playerAction == 'a')
		{
			players[pTurn].Attack();
		}
		else if (playerAction == 'm')
		{
			players[pTurn].Move();
		}
		else if (playerAction == 'e')
		{
			players[pTurn].setCanMove(true);
			players[pTurn].EndTurn();
		}
		else if (playerAction != 'a' || playerAction != 'm' || playerAction != 'e')
		{
			cout << "\nInvalid input. Please enter 'a' for attack, 'm' for move or 'e' for end turn.\n\n";
			system("PAUSE");
			system("cls");
			BoardManager::getInstance()->DisplayBoard();
		}

		if (gameIsRunning)
		{
			return 0;
		}
		if (!gameIsRunning)
		{
			return 1;
		}
	}
}

int BoardManager::GetPlayerPositions(char player)
{
	int temp = -1;

	for (int i = 0; i < 9; i++)
	{
		if (playerPos[i] != 'x')
		{
			if (playerPos[i] == player)
			{
				temp = i;
			}
		}
	}
	
	return temp;
}

void BoardManager::GameOver()
{
	system("cls");

	if (players[0].getHealth() > 0)
	{
		cout << players[0].getName() << " wins!\n\n";
	}
	else if (players[1].getHealth() > 0)
	{
		cout << players[1].getName() << " wins!\n\n";
	}

	char choice;
	cout << "Play Again? (Y/N): ";
	cin >> choice;

	if (choice == 'y')
	{
		system("cls");
		Init();
	}
	if (choice == 'n')
	{
		setGameIsRunning(false);
	}
}