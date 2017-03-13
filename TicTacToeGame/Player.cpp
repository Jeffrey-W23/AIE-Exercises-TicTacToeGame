#include <iostream>
#include "Player.h"
using namespace std;

Player::Player()
{
	userInput = 0;
	playerId = 0;
	playerIcon = ' ';
}

Player::~Player()
{
}

int Player::RunPlayer(int playerId, char board[3][3])
{
	// Display which players turn it is
	cout << "Player " << playerId << ", your move." << endl;

	// set player number to x or o
	if (playerId == 1)
	{
		playerIcon = 'x';
	}
	else if (playerId == 2)
	{
		playerIcon = 'o';
	}

	//place the players icon on the board
	PlayerMove(board);

	// Check if winner
	int win = WinCondition(board);
	return win;
}

void Player::PlayerMove(char board[3][3])
{
	bool Invalid = true;

	while (Invalid)
	{
		// Type a move
		cin >> userInput;
		cin.clear();
		cin.ignore(999999, '\n');

		// Place player icon on the board
		if (userInput == 1 && board[0][0] == '1')
		{
			board[0][0] = playerIcon;
			Invalid = false;
		}
		else if (userInput == 2 && board[0][1] == '2')
		{
			board[0][1] = playerIcon;
			Invalid = false;
		}
		else if (userInput == 3 && board[0][2] == '3')
		{
			board[0][2] = playerIcon;
			Invalid = false;
		}
		else if (userInput == 4 && board[1][0] == '4')
		{
			board[1][0] = playerIcon;
			Invalid = false;
		}
		else if (userInput == 5 && board[1][1] == '5')
		{
			board[1][1] = playerIcon;
			Invalid = false;
		}
		else if (userInput == 6 && board[1][2] == '6')
		{
			board[1][2] = playerIcon;
			Invalid = false;
		}
		else if (userInput == 7 && board[2][0] == '7')
		{
			board[2][0] = playerIcon;
			Invalid = false;
		}
		else if (userInput == 8 && board[2][1] == '8')
		{
			board[2][1] = playerIcon;
			Invalid = false;
		}
		else if (userInput == 9 && board[2][2] == '9')
		{
			board[2][2] = playerIcon;
			Invalid = false;
		}
		else
		{
			cout << "Please take this seriously, chose a tile that actually excists or one that hasnt already been taken.." << endl;
		}
	}
}

int Player::WinCondition(char board[3][3])
{
	//ver win
	if (board[0][0] == playerIcon && board[0][1] == playerIcon && board[0][2] == playerIcon)
	{
		return 1;
	}

	else if (board[1][0] == playerIcon && board[1][1] == playerIcon && board[1][2] == playerIcon)
	{
		return 1;
	}

	else if (board[2][0] == playerIcon && board[2][1] == playerIcon && board[2][2] == playerIcon)
	{
		return 1;
	}

	//hor win
	else if (board[0][0] == playerIcon && board[1][0] == playerIcon && board[2][0] == playerIcon)
	{
		return 1;
	}

	else if (board[0][1] == playerIcon && board[1][1] == playerIcon && board[2][1] == playerIcon)
	{
		return 1;
	}

	else if (board[0][2] == playerIcon && board[1][2] == playerIcon && board[2][2] == playerIcon)
	{
		return 1;
	}

	//diag win
	else if (board[0][0] == playerIcon && board[1][1] == playerIcon && board[2][2] == playerIcon)
	{
		return 1;
	}

	else if (board[0][2] == playerIcon && board[1][1] == playerIcon && board[2][0] == playerIcon)
	{
		return 1;
	}

	//draw
	else if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5'
		&& board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
	{
		return 2;
	}
	
	//no win
	else
	{
		return 0;
	}
}
