//#include, using etc
#include <iostream>
#include "Player.h"
using namespace std;

// Default Constructor
Player::Player(int Id, char Icon)
{
	playerId = Id;
	playerIcon = Icon;
}

// Default Destructor
Player::~Player()
{
}

// the main player function
WinCondition Player::RunPlayer(char** board)
{
	// Display which players turn it is
	cout << "                                                    PLAYER " << playerId << ", YOUR MOVE." << endl;

	//place the players icon on the board
	PlayerMove(board);

	// Check if winner
	WinCondition wincon = WinCondition1(board);
	return wincon;
}

// function to place the players X or O on the board
void Player::PlayerMove(char** board)
{
	bool Invalid = true;

	while (Invalid)
	{
		// get the users input
		int userInput;
		cin >> userInput;
		cin.clear();
		cin.ignore(999999, '\n');

		// Place the players icon on the game board
		if (userInput < 10 && userInput > 0)
		{
			int row = (userInput - 1) / 3;
			int col = (userInput - 1) % 3;

			if (board[row][col] != 'X' && board[row][col] != 'O')
			{
				board[row][col] = playerIcon;
				Invalid = false;
			}
			else
			{
				cout << "PLEASE TAKE THIS SERIOUSLY, CHOOSE A TILE THAT ACTUALLY EXISTS OR ONE THAT HASN'T ALREADY BEEN TAKEN.." << endl;
			}
		}
		else
		{
			cout << "PLEASE TAKE THIS SERIOUSLY, CHOOSE A TILE THAT ACTUALLY EXISTS OR ONE THAT HASN'T ALREADY BEEN TAKEN.." << endl;
		}
	}
}

// function to check if the player has won
WinCondition Player::WinCondition1(char** board)
{
	//ver win
	if (board[0][0] == playerIcon && board[0][1] == playerIcon && board[0][2] == playerIcon)
	{
		return win;
	}

	else if (board[1][0] == playerIcon && board[1][1] == playerIcon && board[1][2] == playerIcon)
	{
		return win;
	}

	else if (board[2][0] == playerIcon && board[2][1] == playerIcon && board[2][2] == playerIcon)
	{
		return win;
	}

	//hor win
	else if (board[0][0] == playerIcon && board[1][0] == playerIcon && board[2][0] == playerIcon)
	{
		return win;
	}

	else if (board[0][1] == playerIcon && board[1][1] == playerIcon && board[2][1] == playerIcon)
	{
		return win;
	}

	else if (board[0][2] == playerIcon && board[1][2] == playerIcon && board[2][2] == playerIcon)
	{
		return win;
	}

	//diag win
	else if (board[0][0] == playerIcon && board[1][1] == playerIcon && board[2][2] == playerIcon)
	{
		return win;
	}

	else if (board[0][2] == playerIcon && board[1][1] == playerIcon && board[2][0] == playerIcon)
	{
		return win;
	}

	//draw
	else if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5'
		&& board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
	{
		return draw;
	}
	
	//no win
	else
	{
		return lose;
	}
}
