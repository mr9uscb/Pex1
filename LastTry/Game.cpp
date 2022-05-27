#include "Game.h"
#include <string>
#include <iostream>

using namespace std;

void Game::welcome_statement()
{
	cout << "Welcome to the game of sticks! \n";
}

void Game::menuOptions() {
	cout << "Options:  \n";
	cout << "Play against a friend (1) \n";
	cout << "Play against the computer (2) \n";
	cout << "Play against the trained computer (3) \n";

}

int Game::setGameMode(int choice)
{
	int counter = 0;
	while (counter == 1) {
		switch (choice)
		{
		case 1:
			choice = 1;
			counter++;
			break;
		case 2:
			choice = 2;
			counter++;
			break;
		case 3:
			choice = 3;
			counter++;
			break;
		default:
			cout << "Please enter a valid option: 1, 2, or 3.";
			cin >> choice;
			break;
		}
	}
	return choice;
}
int Game::getGameMode() {
	return choice;
}

Game::Game() {
	welcome_statement();
}

int Game::playAgain() {
	int status = 0;
	int count = 1;
	if (count == 1) {
		cout << "Would you like to play again? (1 = yes, 0 = no):  ";
		cin >> status;
		if (status == 1) {
			return status;
			count++;
		}
		else if (status == 0) {
			
		}

	}
}

int Game::initialStickCount(int initialStickCount) {

	while (initialStickCount < 10 || initialStickCount > 100) {
		cout << "Please enter a number between 10 and 100 \n";
		cout << "How many sticks are there on the table initially (10-100)? ";
		cin >> initialStickCount;
	}
	int sticksOnTable = initialStickCount;
	return sticksOnTable;
}

int Game::getInitialStickCount() {
	return sticksOnTable;
}

void Game::getSticksOnTable(int sticksOnTable) {
	sticksOnTable = sticksOnTable;
	cout << "There are " << sticksOnTable << " sticks left on the table \n";
}



