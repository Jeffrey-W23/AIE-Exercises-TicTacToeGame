//#include, using etc
#include <iostream>
#include "Map.h"
#include "Player.h"
#pragma once

// game object
class Game
{
public:

	// Default Constructor
	Game();
	
	// Default Destructor
	~Game();
	
	// main game function
	void MainFunction();

private:

	// declare vars
	bool playing;
	Player* player[2];
	Map map;
	char** board;
};