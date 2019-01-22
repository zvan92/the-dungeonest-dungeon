#pragma once
#include <string>
#include <iostream>
#include "BoardManager.h"

using namespace std;

class Player
{
public:
	Player();

	int getHealth()
	{
		return health;
	}
	int getDamage()
	{
		return damage;
	}
	string getName()
	{
		return name;
	}

	void setHealth(int value)
	{
		if (value != NULL)
		{
			health = value;
		}
	}
	void setDamage(int value)
	{
		if (value != NULL)
		{
			health = health - value;
		}
	}
	void setName(string value)
	{
		if (value != "")
		{
			name = value;
		}
	}

	void Attack();
	void Move();
	void EndTurn();

	~Player();
private:
	string name;
	int health;
	int damage;
};

