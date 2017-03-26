//#include, using etc
#pragma once

// create enum for game ending condtions
enum WinCondition 
{
	win,
	lose,
	draw
};

// player object
class Player
{
public:

	// Default Constructor
	Player(int Id, char Icon);
	
	// Default Destructor
	~Player();

	// the main player function
	WinCondition RunPlayer(char** board);
	
	// function to place the players X or O on the board
	void PlayerMove(char** board);
	
	// function to check if the player has won
	WinCondition WinCondition1(char** board);

private:
	
	// declare vars
	char playerIcon;
	int playerId;
};