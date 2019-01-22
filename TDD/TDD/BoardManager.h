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
		return playerAPos;
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

	Player getPlayers(int index)
	{
		return players[index];
	}

// FUNCTIONS ============================================ //
	void StartPlayerPositions();

	void DisplayBoard();

	void PlayerTurn();

	char PlayerAction();

	int GetPlayerPositions(char player);

private:
	BoardManager();

	bool pTurn = 0;
	int playerAPos; //when player calls 'move', call this to get their position
	int playerBPos;
	char playerPos[9] = { 'x','x','x','x','x','x','x','x','x' };
	char moveDir;
	char playerAction;
	Player players[2];

	static BoardManager *instance;

	
	
};