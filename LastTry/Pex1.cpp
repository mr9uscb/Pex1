// Pex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <array>
#include <cstdlib>
#include "Game.h"
#include "Player.h"
#include "Computer.h"

using namespace std;

int main()
{
	string player1Name;
	string player2Name;

	// generate players
	Player Player1;
	Player Player2;

	// generate the computer
	Computer Computer1;
	Computer Computer2;

	// generate the game
	Game Game1;

	int initialStickCount = 0;

	cout << "Please enter a number between 10 and 100 \n";
	cout << "How many sticks are there on the table initially (10-100)? ";
	cin >> initialStickCount;

	int sticksOnTable = Game1.initialStickCount(initialStickCount);


	/* GAME MENU */
	int choice = 0;
	Game1.menuOptions();
	cout << "Which option do you take (1-3)? ";
	cin >> choice;
	Game1.setGameMode(choice);
	Game1.getGameMode();


	/* HUMAN VS HUMAN */

	int count = 0;
	string currentPlayer = "Player1";


	if (choice == 1) {
			while (sticksOnTable > 0) {
				if (currentPlayer == "Player1") {
					Game1.getSticksOnTable(sticksOnTable);
					Player1.setPlayerOneMove();
					sticksOnTable = sticksOnTable - Player1.getPlayerOneMove();
					cout << "\n";
				}
				else {
					Game1.getSticksOnTable(sticksOnTable);
					Player2.setPlayerTwoMove();
					sticksOnTable = sticksOnTable - Player2.getPlayerTwoMove();
					cout << "\n";
				} // end if-else

				if (sticksOnTable < 1) {
					if (currentPlayer == "Player1") {
						string loser = "Player 1, you lose! ";
						cout << loser;
					}
					else {
						string loser = "Player 2, you lose! ";
						cout << loser;
					} // end if-else

				} // end if 

				if (currentPlayer == "Player1") {
					currentPlayer = "Player2";
				}
				else {
					currentPlayer = "Player1";
				} // end if-else
			} // end while
	} // end if




	/* HUMAN VS AI */
	if (choice == 2) {
			Game1.getSticksOnTable(sticksOnTable);
			while (sticksOnTable > 0) {
				if (currentPlayer == "Player1") {
					Player1.setPlayerOneMove();
					sticksOnTable = sticksOnTable - Player1.getPlayerOneMove();
					Game1.getSticksOnTable(sticksOnTable);
					cout << "\n";
				}
				else if ("Player2")
				{
					int pick = 0;
					int sticksLeft = 0;
					Computer1.make_pick();
					Computer1.getPick();
					sticksOnTable = sticksOnTable - Computer1.getPick();
					Game1.getSticksOnTable(sticksOnTable);
					cout << "\n";
				} // end if-else

				if (currentPlayer == "Player1") {
					currentPlayer = "Player2";
				}
				else {
					currentPlayer = "Player1";
				} // end if-else
			} 
	} // end if


	/* AI VS AI */
	if (choice == 3) {
		Game1.getSticksOnTable(sticksOnTable);
		while (sticksOnTable > 0) {
			if (currentPlayer == "Player1") {
				Computer1.computer1Pick();
				Computer1.getPick();
				sticksOnTable = sticksOnTable - Computer1.getPick();
				Game1.getSticksOnTable(sticksOnTable);
				cout << "\n";
			}
			else if ("Player2")
			{
				Computer2.computer2Pick(sticksOnTable);
				Computer2.getPick();
				sticksOnTable = sticksOnTable - Computer2.getPick();
				Game1.getSticksOnTable(sticksOnTable);
				cout << "\n";
			} // end if-else

			if (currentPlayer == "Player1") {
				currentPlayer = "Player2";
			}
			else {
				currentPlayer = "Player1";
			} // end if-else

			} // end outer if-else
		} // end outer while loop
	} // end if


























