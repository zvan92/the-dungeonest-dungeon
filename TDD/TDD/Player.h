#pragma once
#include <string>
#include <iostream>

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
	bool getCanMove()
	{
		return canMove;
	}
	void setCanMove(bool value)
	{
		canMove = value;
	}
	void Attack();
	void Move();
	void EndTurn();
	void ExecuteMove(int pos, char player);
	void ExecuteAttack(int pX);

	~Player();
private:
	string name;
	int health;
	int damage;
	bool canMove;
};

