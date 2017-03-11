#include <iostream>
#include "Game.h"
using namespace std;

Game::Game()
{
	playing = true;
}

Game::~Game()
{
}

void Game::MainFunction()
{
	map.DrawMap(board);

	while (playing)
	{
		bool player1wins = player1.RunPlayer(1, board);
		map.DrawMap(board);
		
		if (player1wins)
		{
			system("pause");
		}

		bool player2wins = player2.RunPlayer(2, board);
		map.DrawMap(board);

		if (player2wins)
		{
			system("pause");
		}
	}
}

