#pragma once
#include <iostream>

using namespace std;

class BoardManager
{
public:
	int gridPos[3][3];
	int pNW;
	int pN;
	int pNE;
	int pW;
	int pC;
	int pE;
	int pSW;
	int pS;
	int pSE;

	BoardManager();
	~BoardManager();
};