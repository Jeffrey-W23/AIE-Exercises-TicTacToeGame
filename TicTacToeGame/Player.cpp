#include <iostream>
#include "Player.h"
using namespace std;

Player::Player()
{
}

void Player::Move(char board[3][3])
{
	int userInput;
	cin >> userInput;
	cout << endl;

	switch (userInput)
	{
	case 1:
		board[0][0] = 'x';
		break;
	case 2:
		board[0][1] = 'x';
		break;
	case 3:
		board[0][2] = 'x';
		break;
	case 4:
		board[1][0] = 'x';
		break;
	case 5:
		board[1][1] = 'x';
		break;
	case 6:
		board[1][2] = 'x';
		break;
	case 7:
		board[2][0] = 'x';
		break;
	case 8:
		board[2][1] = 'x';
		break;
	case 9:
		board[2][2] = 'x';
		break;
	}
}

Player::~Player()
{
}
