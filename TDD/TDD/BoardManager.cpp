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

	// Prints mapping out to screen
	cout << "You are in a dungeon. It's dark. What else is there to say? \n \n";
	cout << "\t" << pNW << "---------------" << pN << "---------------" << pNE << "\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\tx---------------x---------------x\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\t|		|		|\n";
	cout << "\tx---------------x---------------B\n";
	// If playerPosition = 7 && playerA then pNW = A
}


BoardManager::~BoardManager()
{
}