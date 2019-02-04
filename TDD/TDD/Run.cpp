#include "pch.h"
#include "Run.h"
#include "BoardManager.h"


Run::Run()
{
	BoardManager::getInstance()->setGameIsRunning(true);
	int quitting = 0;
	while (!quitting)
	{
		BoardManager::getInstance()->DisplayBoard();
		quitting = BoardManager::getInstance()->PlayerAction();
	}
}


Run::~Run()
{
}
