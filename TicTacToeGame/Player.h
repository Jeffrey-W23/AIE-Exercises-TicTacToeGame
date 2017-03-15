#pragma once

class Player
{
public:
	Player();
	~Player();
	int RunPlayer(int playerId, char board[3][3]);
	void PlayerMove(char board[3][3]);
	int WinCondition(char board[3][3]);

private:
	char playerIcon;
};