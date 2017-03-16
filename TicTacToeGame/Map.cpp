#include <iostream>
#include "Map.h"
using namespace std;

Map::Map()
{
	char temp[3][3] = { { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } }; // convert the i and j into characters. then dont need this.

	board = new char*[3];

	for (int i = 0; i < 3; ++i)
	{
		board[i] = new char[3];

		for (int j = 0; j < 3; ++j)
		{
			board[i][j] = temp[i][j];
		}
	}
}

Map::~Map()
{
	//for () // delete board
}

void Map::DrawMap()
{
	//Draw map
	system("cls");
	cout << "      |      |      " << endl;
	cout << "  " << board[0][0] << "   |  " << board[0][1] << "   |  " << board[0][2] << endl;
	cout << "______|______|______" << endl;
	cout << "      |      |      " << endl;
	cout << "  " << board[1][0] << "   |  " << board[1][1] << "   |  " << board[1][2] << endl;
	cout << "______|______|______" << endl;
	cout << "      |      |      " << endl;
	cout << "  " << board[2][0] << "   |  " << board[2][1] << "   |  " << board[2][2] << endl;
	cout << "      |      |      " << endl << endl;
}

char** Map::CreateMap()
{
	//return map
	return board;
}