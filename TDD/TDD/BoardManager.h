#pragma once
#include <iostream>

using namespace std;

class BoardManager
{
public:
	int gridPos[3][3];
	char pNW;
	char pN;
	char pNE;
	char pW;
	char pC;
	char pE;
	char pSW;
	char pS;
	char pSE;

	BoardManager();
	~BoardManager();
};