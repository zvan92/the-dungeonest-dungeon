#include "pch.h"
#include "BoardManager.h"


BoardManager::BoardManager()
{
	playerPos[0] = 'A';
	playerPos[8] = 'B';

	playerAPos = GetPlayerPositions('A');
	playerBPos = GetPlayerPositions('B');
	
	// Prints mapping out to screen
	cout << "You are in a dungeon. It's dark. What else is there to say? \n \n";
	cout << "\t" << playerPos[0] << "---------------" << playerPos[1] << "---------------" << playerPos[2] << "\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t" << playerPos[3] << "---------------" << playerPos[4] << "---------------" << playerPos[5] << "\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t" << playerPos[6] << "---------------" << playerPos[7] << "---------------" << playerPos[8] << "\n\n";
	cout << "Player A				Player B\n";
	cout << "HP:					HP: \n\n";
	cout << "What would you like to do?\n\n";
	cout << "Move ";

	
}


BoardManager::~BoardManager()
{
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