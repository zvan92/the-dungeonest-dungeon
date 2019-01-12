#pragma once
class Init
{
public:
	Init(); // calls all manager constructors (creates all game objects)

	void SetupPlayers(); // prompt for player names

	~Init();
};

