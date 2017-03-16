#include <iostream>
#include "Game.h"
using namespace std;

Game::Game()
{
	playing = true;
	board = map.CreateMap();
}

Game::~Game()
{
}

void Game::MainFunction()
{
	map.DrawMap();

	while (playing)
	{
		int turn = 0;

		//take turn
		map.DrawMap();
		player[turn].RunPlayer(board);
		map.DrawMap();

		//swap turns
		if (turn == 0)
		{
			turn = 1;
		}
		else
		{
			turn = 0;
		}


		if (player1 == 1)
		{
			playing = false;
			cout << "PLAYER 1 WIN!" << endl;
			system("Pause");
		}

		if (player1 == 2)
		{
			playing = false;
			cout << "DRAW!" << endl;
			system("Pause");
		}
		
		if (player2 == 1)
		{
			playing = false;
			cout << "PLAYER 2 WIN!" << endl;
			system("Pause");
		}

		if (player2 == 2)
		{
			playing = false;
			cout << "DRAW!" << endl;
			system("Pause");
		}
	}
}

