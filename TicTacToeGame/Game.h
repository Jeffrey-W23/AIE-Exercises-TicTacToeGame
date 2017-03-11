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
	char board[3][3] = {{ '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' }};
	Player player1;
	Player player2;
	Map map;
};