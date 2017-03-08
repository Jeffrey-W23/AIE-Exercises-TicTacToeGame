#pragma once

class Player
{
public:
	Player();
	~Player();
	void PlayerMove(char board[3][3]);

private:
	int userInput;
	int playerId;
	char playerIcon;
};