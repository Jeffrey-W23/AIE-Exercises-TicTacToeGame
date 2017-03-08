#include <iostream>
#include "Player.h"
using namespace std;

Player::Player()
{
	userInput = 0;
	playerId = 0;
	playerIcon = ' ';
}

void Player::PlayerMove(char board[3][3])
{
	cin >> userInput;

	if (playerId == 1)
	{
		playerIcon = 'x';
	}
	else if (playerId == 2)
	{
		playerIcon = 'o';
	}

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

Player::~Player()
{
}
