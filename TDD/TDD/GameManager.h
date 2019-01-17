#pragma once

class GameManager
{
public:
	static GameManager *getInstance()
	{
		if (!instance)
		{
			instance = new GameManager();
			return instance;
		}
	}
	~GameManager();

	bool WhoseTurn = 0;
	void StartPlayerTurn();
private:
	GameManager();
	static GameManager* instance;
};

