#include <iostream>
#include "Map.h"
using namespace std;

Map::Map()
{
}

void Map::DrawMap(char board[3][3])
{
	cout << "      |      |      " << endl;
	cout << "  " << board[0][0] << "   |  " << board[0][1] << "   |  " << board[0][2] << endl;

	cout << "______|______|______" << endl;
	cout << "      |      |      " << endl;

	cout << "  " << board[1][0] << "   |  " << board[1][1] << "   |  " << board[1][2] << endl;

	cout << "______|______|______" << endl;
	cout << "      |      |      " << endl;

	cout << "  " << board[2][0] << "   |  " << board[2][1] << "   |  " << board[2][2] << endl;
	cout << "      |      |      " << endl;
}

Map::~Map()
{
}
