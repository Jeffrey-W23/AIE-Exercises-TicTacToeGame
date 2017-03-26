//#include, using etc
#pragma once
#include "Game.h"

// Menu object
class MainMenu
{
public:

	// Default Constructor
	MainMenu();
	
	// Default Destructor
	~MainMenu();
	
	// Menu function. Runs the logic of the main menu
	bool StartMenu();
	
	// Display fucntion for menu
	void PrintMenu();

private:

	// Input variable for menu options
	int menuOption;
	
	// game object
	Game game;
};