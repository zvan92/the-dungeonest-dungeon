#pragma once
#include <string>

using namespace std;

class Player
{
public:
	Player(string name, int position); //constructor, allows user to pass in a name and grid position

	int getHealth();
	int getDamage();
	int getPosition();
	void setHealth(int value);
	void setDamage(int value);
	void Attack();
	void EndTurn();
private:
	string name;
	int health;
	int damage;
	int position; //will be 1-9, based on numpad

	~Player();
};

