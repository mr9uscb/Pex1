#pragma once
#include <iostream>
#include <string>
using namespace std;

class Game
{
private:
	int counter = 0;
	int sticksOnTable = 0;
	int choice;
	int pick = 0;

public:
	Game();
	void welcome_statement();
	
	void getSticksOnTable(int sticksOnTable);
	int setGameMode(int choice);
	void menuOptions();
	int getGameMode();
	int playAgain();
	int initialStickCount(int initialStickCount);
	int getInitialStickCount();

};
