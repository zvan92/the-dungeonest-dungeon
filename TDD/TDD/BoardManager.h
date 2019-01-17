#pragma once
#include "Player.h"

using namespace std;

class BoardManager
{
public:
	static BoardManager *getInstance()
	{
		if (!instance)
		{
			instance = new BoardManager();
			return instance;
		}
	}
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

	char PlayerAction();
private:
	BoardManager();
	static BoardManager *instance;
	
};