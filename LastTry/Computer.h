#pragma once
#include<string>
#include<stdio.h>
using namespace std;


class Computer
{
private:
	string name;
	int wins;
	int pick;

public:
	Computer();
	int getSticks(int numsticksleft);
	int make_pick();
	int autoPick();
	int getPick();
	int getWins();
	int computer1Pick();
	int computer2Pick(int sticksOnTable);
};