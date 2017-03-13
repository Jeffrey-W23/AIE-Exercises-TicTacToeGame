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
		int player1 = PlayerTurnTaking(1);
		
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

		int player2 = PlayerTurnTaking(2);
		
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

int Game::PlayerTurnTaking(int playerNumber)
{
	map.DrawMap(board);
	int currentPlayer = player.RunPlayer(playerNumber, board);
	map.DrawMap(board);

	return currentPlayer;
}

