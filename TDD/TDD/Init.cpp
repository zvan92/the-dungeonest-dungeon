#include "pch.h"
#include "Init.h"
#include "Player.h"
#include "BoardManager.h"


Init::Init()
{
	SetupPlayers();
	BoardManager(); // ideally shouldn't display any text yet
}


Init::~Init()
{
}


void Init::SetupPlayers()
{
	Player players[2];

	for (int i = 0; i < 2; i++)
	{
		string name;
		cout << "Enter player " << i+1 << " name: ";
		cin >> name;
		cout << endl;
		players[i].setName(name);
	}
}
