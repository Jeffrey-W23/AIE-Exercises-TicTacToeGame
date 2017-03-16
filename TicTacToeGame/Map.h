#pragma once

class Map
{
public:
	Map();
	~Map();

	char** CreateMap();
	void DrawMap();

private:
	char** board;
};