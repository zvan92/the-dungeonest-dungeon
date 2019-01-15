#include "pch.h"
#include "Init.h"
#include "Player.h"
#include "BoardManager.h"

BoardManager myBoard;

Init::Init()
{
	SetupPlayers();
	myBoard.StartPlayerPositions();
	myBoard.DisplayBoard();
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
		myBoard.players[i].setName(name);
		myBoard.players[i].setHealth(100);
		system("CLS");
	}
}
