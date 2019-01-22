#include "pch.h"
#include <iostream>
#include "Init.h"
#include "BoardManager.h"

Init::Init()
{
	SetupPlayers();
	BoardManager::getInstance()->StartPlayerPositions();
	BoardManager::getInstance()->DisplayBoard();
}


Init::~Init()
{
}


void Init::SetupPlayers()
{
	for (int i = 0; i < 2; i++)
	{
		string name;
		cout << "Enter player " << i+1 << " name: ";
		cin >> name;
		cout << endl;
		BoardManager::getInstance()->getPlayers(i).setName(name);
		BoardManager::getInstance()->getPlayers(i).setHealth(100);
		system("CLS");
	}
}
