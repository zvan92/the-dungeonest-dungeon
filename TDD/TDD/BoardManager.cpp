#include "pch.h"
#include "BoardManager.h"
#include "Player.h"


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
	cout << "\t" << players[0].getName() << "\t\t\t" << players[1].getName() << endl;
	cout << "\tHP: " << players[0].getHealth() << "\t\t\tHP: " << players[1].getHealth() << endl;
	cout << endl;
	cout << "What would you like to do?\n\n";
	cout << "(A)ttack \n(M)ove \n(E)nd Turn \n\nYour choice: ";
	ACTION:
	cin >> playerAction;
	if (playerAction == 'a')
		players[0].Attack();
	else if (playerAction == 'm')
		players[0].Move();
	else if (playerAction == 'e')
		players[0].EndTurn();
	else
	{
		cout << "Invalid input. Please enter 'a' for attack, 'm' for move or 'e' for end turn." << endl;
		cout << "What would you like to do?\n\n";
		cout << "(A)ttack \n(M)ove \n(E)nd Turn \n\nYour choice: ";
		goto ACTION;
	}
}

int BoardManager::GetPlayerPositions(char player) //pass in 'a' or 'b' depending on which player you're checking
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