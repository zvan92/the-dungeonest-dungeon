#pragma once
#include <iostream>

using namespace std;

class BoardManager
{
public:
	// Grid position following cardinal directions as per Numpad
	int playerAPos;
	int playerBPos;
	char playerPos[9] = { 'x','x','x','x','x','x','x','x','x' };
	char moveDir;

	int GetPlayerPositions(char player);

	void StartPlayerPositions();

	void DisplayBoard();
	BoardManager();
	~BoardManager();
};