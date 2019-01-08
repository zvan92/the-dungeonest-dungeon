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
	int pNW = 0;
	int pN = 0;
	int pNE = 0;
	int pW = 0;
	int pC = 0;
	int pE = 0;
	int pSW = 0;
	int pS = 0;
	int pSE = 0;

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
	cout << "\t" << pSW << "---------------" << pS << "---------------" << pSE << "\n";
	// If playerPosition = 7 && playerA then pNW = A
}


BoardManager::~BoardManager()
{
}