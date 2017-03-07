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
		char board[3][3] = { { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } };

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