#include <iostream>
#include "Game.h"
using namespace std;

Game::Game()
{
	playing = true;
	board[3][3];
}

void Game::MainFunction()
{
	while (playing)
	{
		board[3][3] = map.DrawMap();
		player1.PlayerMove(board[3][3]);
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