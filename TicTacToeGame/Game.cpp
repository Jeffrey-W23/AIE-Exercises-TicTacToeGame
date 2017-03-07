#include <iostream>
#include "Game.h"
using namespace std;

Game::Game()
{
}

void Game::MainFunction()
{
	bool playing = true;
	while (playing)
	{
		char board[3][3] = { {'1', '2', '3'}, { '4', '5', '6' }, { '7', '8', '9' } };
		int trynum;

		cout << "      |      |      " << endl;
		cout << "  " << board[0][0] << "   |  " << board[0][1] << "   |  " << board[0][2] << endl;

		cout << "______|______|______" << endl;
		cout << "      |      |      " << endl;

		cout << "  " << board[1][0] << "   |  " << board[1][1] << "   |  " << board[1][2] << endl;

		cout << "______|______|______" << endl;
		cout << "      |      |      " << endl;

		cout << "  " << board[2][0] << "   |  " << board[2][1] << "   |  " << board[2][2] << endl;
		cout << "      |      |      " << endl;


		cout << "GO PLAYER 1:" << endl;
		cin >> trynum;
		cout << endl;

		switch (trynum)
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

		system("pause");
		system("cls");
	}
}











//int Game::WinCondition()
//{
//	//ver
//	if (top->topLeft && top->topCenter && top->topRight)
//	{
//	}
//
//	if (middle->middleLeft && middle->middleCenter && middle->middleRight)
//	{
//	}
//
//	if (bottom->bottomLeft && bottom->bottomCenter && bottom->bottomRight)
//	{
//	}
//
//	//hor
//	if (top->topLeft && middle->middleLeft && bottom->bottomLeft)
//	{
//	}
//
//	if (top->topCenter && middle->middleCenter && bottom->bottomCenter)
//	{
//	}
//
//	if (top->topRight && middle->middleRight && bottom->bottomRight)
//	{
//	}
//
//	//diag
//	if (top->topLeft && middle->middleCenter && bottom->bottomRight)
//	{
//	}
//
//	if (top->topRight && middle->middleCenter && bottom->bottomLeft)
//	{
//	}
//}

Game::~Game()
{
}