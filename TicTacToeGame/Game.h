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
	Player player1;
	Player player2;
	Map map;
	char board[3][3];
};