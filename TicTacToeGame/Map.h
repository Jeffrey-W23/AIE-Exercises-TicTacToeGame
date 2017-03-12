#pragma once

class Map
{
public:
	Map();
	~Map();

	char** CreateMap();
	void DrawMap(char board[3][3]);

private:
	char board[3][3];
};