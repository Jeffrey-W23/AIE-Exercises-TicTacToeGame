#include <iostream>
#include "Map.h"
#include "Player.h"
#pragma once

class Game
{
public:
	Game();
	~Game();

	void MainFunction();
	int PlayerTurnTaking(int playerNumber);

private:
	bool playing;
	Player player;
	Map map;
	char board[3][3];
};