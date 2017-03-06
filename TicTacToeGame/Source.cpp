#include <iostream>
#include <chrono>
#include "MainMenu.h"
#include "Game.h" 
using namespace std;

void main()
{
	bool gameRunning = true;

	while (gameRunning)
	{
		int menuOption;
		MainMenu menu;
		Game game;

		menu.PrintMenu();

		cin >> menuOption;
		cin.clear();
		cin.ignore(999999, '\n');

		cout << endl;

		if (menuOption == 1)
		{
			//Player vs Player
		}
		else if (menuOption == 2)
		{
			//Player vs AI
		}
		else if (menuOption == 3)
		{
			gameRunning = false;
		}
		else
		{
			system("cls");
			cout << "Please enter a valid menu option dude, this isn't a game." << endl;
			cin;
		}
	}
}


// 2 play modes - player vs player, player vs computer (impossible)