#include <iostream>
#include "Game.h"
using namespace std;

Game::Game()
{
	playing = true;
	board = map.CreateMap();
	player[0] = new Player(1, 'X');
	player[1] = new Player(2, 'O');
}

Game::~Game()
{
	//for () // delete player
}

void Game::MainFunction()
{
	map.DrawMap();

	int turn = 0;

	while (playing)
	{
		//take turn
		map.DrawMap();
		WinCondition wincon = player[turn].RunPlayer(board);
		map.DrawMap();

		if (wincon == win)
		{
			playing = false;
			cout << "PLAYER 1 WIN!" << endl; // for both players now
			system("Pause");
		}

		if (wincon == draw)
		{
			playing = false;
			cout << "DRAW!" << endl;
			system("Pause");
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

