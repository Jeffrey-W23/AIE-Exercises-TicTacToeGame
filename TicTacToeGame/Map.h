//#include, using etc
#pragma once

// map object
class Map
{
public:

	// Default Constructor
	Map();

	// Default Destructor
	~Map();
	
	// Fuction to Create the map
	char** CreateMap();

	// Function to draw the map
	void DrawMap();

private:

	// char array to store the map
	char** board;
};