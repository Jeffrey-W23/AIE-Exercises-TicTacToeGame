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
	Player* player[2];
	Map map;
	char** board;
};