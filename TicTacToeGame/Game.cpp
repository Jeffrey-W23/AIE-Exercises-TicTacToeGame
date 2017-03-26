//#include, using etc
#include <iostream>
#include "Game.h"
#include <conio.h>
using namespace std;

// Default Constructor
Game::Game()
{
	// initialize values
	playing = true;

	// create the tic tac toe board
	board = map.CreateMap();

	// create 2 players
	player[0] = new Player(1, 'X');
	player[1] = new Player(2, 'O');
}

// Default Destructor
Game::~Game()
{
	// delete the 2 players
	delete player[0];
	delete player[1];
}

// Main game function
void Game::MainFunction()
{
	// display the tic tac toe board
	map.DrawMap();

	// Start the turn decider
	int turn = 0;

	// Start the match loop
	while (playing)
	{
		// a player turn. draw map, check the players placement, update map
		map.DrawMap();
		WinCondition wincon = player[turn]->RunPlayer(board);
		map.DrawMap();

		//// CHECK WIN ////
		//win
		if (wincon == win)
		{
			cout << "                                                       PLAYER " << turn+1 << " WINS!" << endl << endl;
			playing = false;
			cout << "                                                 PRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}

		// draw
		else if (wincon == draw)
		{
			cout << "                                                            DRAW!" << endl << endl;
			playing = false;
			cout << "                                                 PRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}
		//// CHECK WIN ////

		//swap turns if there is no win
		if (turn == 0)
		{
			turn = 1;
		}
		else
		{
			turn = 0;
		}
	}
}

