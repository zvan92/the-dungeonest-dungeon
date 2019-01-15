#pragma once
#include <iostream>

using namespace std;

class BoardManager
{
public:
	// Grid position following cardinal directions as per Numpad
	int gridPos[3][3] = {
		{7, 8, 9},
		{4, 5, 6},
		{1, 2, 3}
	};
	char playerPos[9] = { 'x','x','x','x','x','x','x','x','x' };
	char moveDir;

	int GetPlayerPositions(char player);

	BoardManager();
	~BoardManager();
};