#include "pch.h"
#include "GameManager.h"
#include "Init.h"
#include <iostream>

using namespace std;

GameManager *GameManager::instance = 0; //was in .h before

GameManager::GameManager()
{
}
GameManager::~GameManager()
{
}


void GameManager::StartPlayerTurn()
{
	//BoardManager::getInstance()->
	cout << "what would you like to do?" << endl;
	system("PAUSE");
}