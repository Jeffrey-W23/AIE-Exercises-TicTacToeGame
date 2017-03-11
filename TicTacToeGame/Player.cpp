#include <iostream>
#include "Player.h"
using namespace std;

Player::Player()
{
	userInput = 0;
	playerId = 0;
	playerIcon = ' ';
	win = false;
}

Player::~Player()
{
}

bool Player::RunPlayer(int playerId, char board[3][3])
{
	// Type a move
	cout << "Player " << playerId << ", your move." << endl;
	cin >> userInput;
	cin.clear();
	cin.ignore(999999, '\n');

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
	win = WinCondition(board);
	return win;
}

void Player::PlayerMove(char board[3][3])
{
	// check where the player wants to put the icon and place it there	
	switch (userInput)
	{
	case 1:
		board[0][0] = playerIcon;
		break;
	case 2:
		board[0][1] = playerIcon;
		break;
	case 3:
		board[0][2] = playerIcon;
		break;
	case 4:
		board[1][0] = playerIcon;
		break;
	case 5:
		board[1][1] = playerIcon;
		break;
	case 6:
		board[1][2] = playerIcon;
		break;
	case 7:
		board[2][0] = playerIcon;
		break;
	case 8:
		board[2][1] = playerIcon;
		break;
	case 9:
		board[2][2] = playerIcon;
		break;
	}
}

bool Player::WinCondition(char board[3][3])
{
	//ver win
	if (board[0][0] == playerIcon && board[0][1] == playerIcon && board[0][2] == playerIcon)
	{
		win = true;
		return win;
	}

	else if (board[1][0] == playerIcon && board[1][1] == playerIcon && board[1][2] == playerIcon)
	{
		win = true;
		return win;
	}

	else if (board[2][0] == playerIcon && board[2][1] == playerIcon && board[2][2] == playerIcon)
	{
		win = true;
		return win;
	}

	//hor win
	else if (board[0][0] == playerIcon && board[1][0] == playerIcon && board[2][0] == playerIcon)
	{
		win = true;
		return win;
	}

	else if (board[0][1] == playerIcon && board[1][1] == playerIcon && board[2][1] == playerIcon)
	{
		win = true;
		return win;
	}

	else if (board[0][2] == playerIcon && board[1][2] == playerIcon && board[2][2] == playerIcon)
	{
		win = true;
		return win;
	}

	//diag win
	else if (board[0][0] == playerIcon && board[1][1] == playerIcon && board[2][2] == playerIcon)
	{
		win = true;
		return win;
	}

	else if (board[0][2] == playerIcon && board[1][1] == playerIcon && board[2][0] == playerIcon)
	{
		win = true;
		return win;
	}
	//no win
	else
	{
		win = false;
		return win;
	}
}
