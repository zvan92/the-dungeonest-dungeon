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
		}
		return instance;
	}
	~BoardManager();

	int getPlayerAPos()
	{
		return playerAPos;
	}
	int getPlayerAPos()
	{
		return playerAPos;
	}

	void StartPlayerPositions();

	void DisplayBoard();

	void PlayerTurn();

	char PlayerAction();
private:
	BoardManager();

	bool pTurn = 0;
	int playerAPos;
	int playerBPos;
	char playerPos[9] = { 'x','x','x','x','x','x','x','x','x' };
	char moveDir;
	char playerAction;
	
	Player players[2];

	static BoardManager *instance;

	
	
};