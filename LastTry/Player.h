#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
	int pick = 0;
public:
	int Player1(int);
	void setPlayer2Name(string name);
	int makePick();
	int getPick();
	int setPlayerOneMove();
	int getPlayerOneMove();
	int setPlayerTwoMove();
	int getPlayerTwoMove();
};
