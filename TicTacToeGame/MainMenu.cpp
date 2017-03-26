//#include, using etc
#include <iostream>
#include "MainMenu.h"
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

// Default Constructor
MainMenu::MainMenu()
{
}

// Default Destructor
MainMenu::~MainMenu()
{
}

// Menu function. Runs the logic of the main menu
bool MainMenu::StartMenu()
{
	// display menu
	PrintMenu();

	// ask for input from the player for which menu option they would like.
	cin >> menuOption;
	cin.clear();
	cin.ignore(999999, '\n');
	cout << endl;

	// Start the game
	if (menuOption == 1)
	{
		game.MainFunction();
		menuOption = 0;
		return true;
	}

	// Quit the program
	else if (menuOption == 2)
	{
		return false;
	}

	// make sure the user only has the 2 options
	else
	{
		cout << "                    PLEASE ENTER A VALID MENU OPTION DUDE, THIS ISN'T A GAME." << endl << endl;
		cout << "                    PRESS ANY KEY TO CONTINUE..." << endl;
		_getch();
		return true;
	}
}

// Display fucntion for menu
void MainMenu::PrintMenu()
{
	system("cls");
	cout << "                                                                                                  " << endl;
	cout << "                                                                                                  " << endl;
	cout << "                                                                                                  " << endl;
	cout << "                     d888888b d888888b  .o88b. d888888b  .d8b.   .o88b. d888888b  .d88b.  d88888b " << endl;
	cout << "                     `~~88~~'   `88'   d8P  Y8 `~~88~~' d8' `8b d8P  Y8 `~~88~~' .8P  Y8. 88'     " << endl;
	cout << "                        88       88    8P         88    88ooo88 8P         88    88    88 88ooooo " << endl;
	cout << "                        88       88    8b         88    88~~~88 8b         88    88    88 88~~~~~ " << endl;
	cout << "                        88      .88.   Y8b  d8    88    88   88 Y8b  d8    88    `8b  d8' 88.     " << endl;
	cout << "                        YP    Y888888P  `Y88P'    YP    YP   YP  `Y88P'    YP     `Y88P'  Y88888P " << endl << endl;

	cout << "                    _______________________________________________________________________________" << endl;
	cout << "                    |                                                                             |" << endl;
	cout << "                    |  TO NAVIGATE THE MENU PLEASE TYPE ONE OF THE NUMBERS NEXT TO A MENU ITEM    |" << endl;
	cout << "                    |  FOLLOWED BY THE ENTER KEY.                                                 |" << endl;
	cout << "                    |_____________________________________________________________________________|" << endl << endl << endl;

	cout << "                    1. PLAY GAME!                                                                  " << endl;
	cout << "                    2. QUIT                                                                        " << endl;
}