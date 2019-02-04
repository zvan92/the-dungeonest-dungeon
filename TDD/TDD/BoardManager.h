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

	Player players[2];

// GETTERS & SETTERS ==================================== //
	int getPlayerAPos()
	{
		return playerAPos;
	}
	void setPlayerAPos(int value)
	{
		playerAPos = value;
	}

	int getPlayerBPos()
	{
		return playerBPos;
	}
	void setPlayerBPos(int value)
	{
		playerBPos = value;
	}

	bool getPTurn()
	{
		return pTurn;
	}
	void setPTurn(bool value)
	{
		pTurn = value;
	}
	
	char getPlayerPos(int index)
	{
		return playerPos[index];
	}
	void setPlayerPos(int index, char value)
	{
		playerPos[index] = value;
	}

	char getMoveDir()
	{
		return moveDir;
	}
	void setMoveDir(char value)
	{
		moveDir = value;
	}

	char getPlayerAction()
	{
		return playerAction;
	}
	void setPlayerAction(char value)
	{
		playerAction = value;
	}

	bool getGameIsRunning()
	{
		return gameIsRunning;
	}
	void setGameIsRunning(bool value)
	{
		gameIsRunning = value;
	}

// FUNCTIONS ============================================ //
	void StartPlayerPositions();

	void DisplayBoard();

	void PlayerTurn();

	int PlayerAction();

	bool checkCollision();

	int GetPlayerPositions(char player);

	void GameOver();

	bool gameIsRunning;

private:
	BoardManager();

	bool pTurn = 0;
	int playerAPos;
	int playerBPos;
	char playerPos[9] = { 'x','x','x','x','x','x','x','x','x' };
	char moveDir;
	char playerAction;

	static BoardManager *instance;

	
	
};