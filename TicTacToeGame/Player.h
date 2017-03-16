#pragma once

enum WinCondition 
{
	win,
	lose,
	draw
};

class Player
{
public:
	Player(int Id, char Icon);
	~Player();
	WinCondition RunPlayer(int playerId, char** board);
	void PlayerMove(char** board);
	WinCondition WinCondition1(char** board);

private:
	char playerIcon;
	int playerId;
};