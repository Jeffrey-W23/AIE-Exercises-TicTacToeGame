#include <iostream>
#include "Game.h"
#include <conio.h>
using namespace std;

Game::Game()
{
	playing = true;
	board = map.CreateMap();
	player[0] = new Player(1, 'X');
	player[1] = new Player(2, 'O');
}

// not working
Game::~Game()
{
	delete player[0];
	delete player[1];
}

void Game::MainFunction()
{
	map.DrawMap();

	int turn = 0;

	while (playing)
	{
		//take turn
		map.DrawMap();
		WinCondition wincon = player[turn]->RunPlayer(board);
		map.DrawMap();

		if (wincon == win)
		{
			cout << "                                                       PLAYER " << turn+1 << " WINS!" << endl << endl;
			playing = false;
			cout << "                                                 PRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}
		else if (wincon == draw)
		{
			cout << "                                                            DRAW!" << endl << endl;
			playing = false;
			cout << "                                                 PRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}

		//swap turns
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

