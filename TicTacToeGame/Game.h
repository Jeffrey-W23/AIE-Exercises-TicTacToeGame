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

private:
	bool playing;

	char board[3][3];
	Player player1;
	Map map;
};