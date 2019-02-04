#include "pch.h"
#include <iostream>
#include "Init.h"
#include "BoardManager.h"
#include <time.h>

Init::Init()
{
	srand(time(0));
	SetupPlayers();
	BoardManager::getInstance()->StartPlayerPositions();
	BoardManager::getInstance()->DisplayBoard();
}


Init::~Init()
{
}


void Init::SetupPlayers()
{
	cout << "Welcome to...\n\n";
	cout << "___________.__" << endl;
	cout << "\\__    ___/|  |__   ____" << endl;
	cout << "  |    |   |  |  \\_/ __ \\" << endl;
	cout << "  |    |   |   Y  \\  ___/" << endl;
	cout << "  |____|   |___|  /\\___  >" << endl;
	cout << "                \\/     \\/" << endl;
	cout << "________                                                            __" << endl;
	cout << "\\______ \\  __ __  ____    ____   ____  ____   ____   ____   _______/  |_" << endl;
	cout << " |    |  \\|  |  \\/    \\  / ___\\_/ __ \\/  _ \\ /    \\_/ __ \\ /  ___/\\   __\\" << endl;
	cout << " |    `   \\  |  /   |  \\/ /_/  >  ___(  <_> )   |  \\  ___/ \\___ \\  |  |" << endl;
	cout << "/_______  /____/|___|  /\\___  / \\___  >____/|___|  /\\___  >____  > |__|" << endl;
	cout << "        \\/           \\//_____/      \\/           \\/     \\/     \\/" << endl;
	cout << "________" << endl;
	cout << "\\______ \\  __ __  ____    ____   ____  ____   ____" << endl;
	cout << " |    |  \\|  |  \\/    \\  / ___\\_/ __ \\/  _ \\ /    \\" << endl;
	cout << " |    `   \\  |  /   |  \\/ /_/  >  ___(  <_> )   |  \\" << endl;
	cout << "/_______  /____/|___|  /\\___  / \\___  >____/|___|  /" << endl;
	cout << "        \\/           \\//_____/      \\/           \\/" << endl << endl;
	system("PAUSE");
	system("cls");
	
	for (int i = 0; i < 2; i++)
	{
		string name;
		cout << "Enter player " << i+1 << " name: ";
		cin >> name;
		cout << endl;
		BoardManager::getInstance()->players[i].setName(name);
		BoardManager::getInstance()->players[i].setHealth(100);
		system("CLS");
	}
}
