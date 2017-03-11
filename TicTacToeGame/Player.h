#pragma once

class Player
{
public:
	Player();
	~Player();
	bool RunPlayer(int playerId, char board[3][3]);
	void PlayerMove(char board[3][3]);
	bool WinCondition(char board[3][3]);

private:
	int userInput;
	char playerIcon;
	int playerId;
	bool win;
};