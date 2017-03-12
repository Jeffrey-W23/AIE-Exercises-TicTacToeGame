#include <iostream>
#include "Game.h"
using namespace std;

Game::Game()
{
	playing = true;

	char** temp = map.CreateMap();

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = temp[i][j];
		}
	}
}

Game::~Game()
{
}

void Game::MainFunction()
{
	map.DrawMap(board);

	while (playing)
	{
		bool PlayerOne = player1.RunPlayer(1, board);

		map.DrawMap(board);
		
		if (PlayerOne)
		{
			system("pause");
		}

		bool PlayerTwo = player2.RunPlayer(2, board);

		map.DrawMap(board);

		if (PlayerTwo)
		{
			system("pause");
		}
	}
}

