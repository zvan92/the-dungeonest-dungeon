#pragma once
#include <iostream>
#include "Init.h"
#include "Player.h"

using namespace std;

class BoardManager
{
public:
	BoardManager();
	~BoardManager();

	// Grid position following cardinal directions as per Numpad
	int playerAPos;
	int playerBPos;
	char playerPos[9] = { 'x','x','x','x','x','x','x','x','x' };
	char moveDir;
	char playerAction;
	Player players[2];

	int GetPlayerPositions(char player);

	void StartPlayerPositions();

	void DisplayBoard();
};