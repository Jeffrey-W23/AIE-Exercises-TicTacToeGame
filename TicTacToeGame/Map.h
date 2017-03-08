#pragma once

class Map
{
public:
	Map();
	~Map();

	char DrawMap();

private:
	char board[3][3];
};

