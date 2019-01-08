#pragma once
#include <string>

using namespace std;

class Player
{
public:
	Player(string name); //constructor, allows user to pass in a name

	void getHealth();
	void getDamage();
	void setHealth(int value);
	void setDamage(int value);
	void MovePosition();
	void Attack();
	void EndTurn();
private:
	string name;
	int health;
	int damage;

	~Player();
};

