#include "Computer.h"
#include<string>
#include<iostream>
#include<stdio.h>
#include <array>
using namespace std;


Computer::Computer(){

}

int Computer::getSticks(int sticksOnTable) 
{

	int pickSticks = 0;
	int pick = 0;

	pickSticks = pick;
	return pickSticks;
};

int Computer::make_pick() {
	pick = 1 + rand() % 3;
	cout << "AI selects " << pick << "\n";

	return 0;
}

int Computer::autoPick() {
	int count = 0;
	pick = 1 + rand() % 3;

	if (count == 0) {
		cout << "AI #1 selects " << pick << "\n"; // could make it where you can name the ai's
		count++;
	}
	else {
		cout << "AI #2 selects " << pick << "\n"; // could make it where you can name the ai's
		count++;
	}

	return 0;
}

int Computer::computer1Pick() {
	pick = 1 + rand() % 3;
	cout << "AI #1 selects " << pick << "\n"; // could make it where you can name the ai's

	return 0;
}

int Computer::computer2Pick(int sticksOnTable) {
	pick = 1 + rand() % 3;
	cout << "AI #2 selects " << pick << "\n"; 
	int numberOfSticksLeft = sticksOnTable;

	return pick;
}

int Computer::getPick() {
	return pick;
}

int Computer::getWins()
{
	return wins;
};





























