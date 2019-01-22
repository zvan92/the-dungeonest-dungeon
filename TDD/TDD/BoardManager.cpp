#include "pch.h"
#include <iostream>
#include "BoardManager.h"
#include "Init.h"

using namespace std;

BoardManager *BoardManager::instance = 0; //was in .h before

BoardManager::BoardManager()
{
	playerAPos = GetPlayerPositions('A');
	playerBPos = GetPlayerPositions('B');
}


BoardManager::~BoardManager()
{
}

void BoardManager::StartPlayerPositions()
{
	playerPos[0] = 'A';
	playerPos[8] = 'B';
}

void BoardManager::DisplayBoard()
{
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
	do
	{
		PlayerAction();
	} while (PlayerAction() == NULL);
}

void BoardManager::PlayerTurn()
{
	pTurn = !pTurn;
}

char BoardManager::PlayerAction()
{
	cout << "It's " << players[pTurn].getName() << "'s turn.\n\n";
	cout << "What would you like to do?\n\n";
	cout << "(A)ttack \n(M)ove \n(E)nd Turn \n\nYour choice: ";
	cin >> playerAction;
	if (playerAction == 'a')
	{
		PlayerTurn();
		players[0].Attack();
	}
	else if (playerAction == 'm')
	{
		PlayerTurn();
		players[0].Move();
	}
	else if (playerAction == 'e')
	{
		PlayerTurn();
		players[0].EndTurn();
	}
	else if (playerAction != 'a' || playerAction != 'm' || playerAction != 'e')
	{
		cout << "\nInvalid input. Please enter 'a' for attack, 'm' for move or 'e' for end turn.\n\n";
		return NULL;
	}
	
	return playerAction;
}

int BoardManager::GetPlayerPositions(char player) //pass in 'A' or 'B' depending on which player you're checking
{
	int temp = -1;

	for (int i = 0; i < 9; i++)
	{
		if (playerPos[i] != 'x') //if a location variable has an 'A' or 'B' value
		{
			if (playerPos[i] == player)
			{
				temp = i; //stores a value of 1-9 to show position
			}
		}
	}
	
	return temp;
}