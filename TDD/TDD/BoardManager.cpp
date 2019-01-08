#include "pch.h"
#include "BoardManager.h"


BoardManager::BoardManager()
{
	// Grid position following cardinal directions as per Numpad
	int gridPos[3][3] = {
		{7, 8, 9},
		{4, 5, 6},
		{1, 2, 3}
	};
	char pNW = 'x';
	char pN = 'x';
	char pNE = 'x';
	char pW = 'x';
	char pC = 'x';
	char pE = 'x';
	char pSW = 'x';
	char pS = 'x';
	char pSE = 'x';

	// Prints mapping out to screen
	cout << "You are in a dungeon. It's dark. What else is there to say? \n \n";
	cout << "\t" << pNW << "---------------" << pN << "---------------" << pNE << "\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t" << pW << "---------------" << pC << "---------------" << pE << "\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t" << pSW << "---------------" << pS << "---------------" << pSE << "\n\n";
	cout << "Player A				Player B\n";
	cout << "HP:					HP: \n\n";
	cout << "What would you like to do?\n";

	// If playerPosition = 7 && playerA then pNW = A
}


BoardManager::~BoardManager()
{
}