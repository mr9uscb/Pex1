#include "Player.h"

#include <string>
#include <iostream>
using namespace std;

int Player::makePick() {

	cout << "How many : ";
	cin >> pick;
	while (pick < 1 || pick > 3) {
		cout << "I said a number between 1 and 3";
		cout << "How many : ";
		cin >> pick;

	}
	return pick;
}
int Player::setPlayerOneMove() {
	cout << "Player 1: How many sticks do you take (1-3)? ";
	cin >> pick;
	while (pick < 1 || pick > 3) {
		cout << "Invalid number: Please enter a number between 1 and 3 \n";
		cout << "Player 1: How many sticks do you take (1-3)? ";
		cin >> pick;

	}
	return pick;
}
int Player::getPlayerOneMove() {
	return pick;
}
int Player::setPlayerTwoMove() {
	cout << "Player 2: How many sticks do you take (1-3)? ";
	cin >> pick;
	while (pick < 1 || pick > 3) {
		cout << "Invalid number: Please enter a number between 1 and 3 \n";
		cout << "Player 2: How many sticks do you take (1-3)? ";
		cin >> pick;

	}
	return pick;
}
int Player::getPlayerTwoMove() {
	return pick;
}
int Player::getPick() {
	return pick;
}