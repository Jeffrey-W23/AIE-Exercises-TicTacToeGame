#include <iostream>
#include "Map.h"
using namespace std;

Map::Map()
{
	/*for (char i; i < 3; i++)
	{
		for (char j; j < 3; i++)
		{
			board[j][i];
		}
	}*/

	/*board[3][3] = {
		{ '1', '2', '3' },
		{ '4', '5', '6' }, 
		{ '7', '8', '9' }
	};*/
}

Map::~Map()
{
}

char Map::DrawMap()
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
	
	return board[3][3];

	system("pause");
}