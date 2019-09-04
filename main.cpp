/***********************************************************************
 *  calc.cpp
 *  Created on: Sep 24, 2018
 *  Author: Benjamin Jenney
 **********************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int x = 0, o = 0, loopInit = 1, playAgain;


	string dash,
	intro = "the board is empty, enter the corresponding number where you wish to move. ";
	dash.append(intro.length(), '-');

	char board[9] = {'1','2','3','4','5','6','7','8','9'};

		cout << dash << endl;
		cout << intro << '\n' << "'o' has the first move " << endl;
		cout << dash << '\n' << endl;


	while (loopInit == 1)	// start gameLoop as long as loopInit equals one
		{

		// gameBoard ; updates game board with x's latest move

		cout << board[0] << " " << board[1] << " " << board[2] << endl;
		cout << board[3] << " " << board[4] << " " << board[5] << endl;
		cout << board[6] << " " << board[7] << " " << board[8] << endl;

		// o's turn

		cout << "'o' enter a move: " << endl;
		cin >> o;

		switch (o) {
			case 1 : board[0] = 'o';
				break;
			case 2 : board[1] = 'o';
				break;
			case 3 : board[2] = 'o';
				break;
			case 4 : board[3] = 'o';
				break;
			case 5 : board[4] = 'o';
				break;
			case 6 : board[5] = 'o';
				break;
			case 7 : board[6] = 'o';
				break;
 			case 8 : board[7] = 'o';
				break;
			case 9 : board[8] = 'o';

		}
			// displays updated board with o's latest move

			cout << board[0] << " " << board[1] << " " << board[2] << endl;
			cout << board[3] << " " << board[4] << " " << board[5] << endl;
			cout << board[6] << " " << board[7] << " " << board[8] << endl;

			// check for win condition

			if (board[0] == 'o' && board[1] == 'o' && board[2] == 'o') {
					cout << "'o' wins!" << endl;
						loopInit = 0;
				} else if (board[3] == 'o' && board[4] == 'o' && board[5] == 'o') {
					cout << "'o' wins!" << endl;
						loopInit = 0;
				} else if (board[6] == 'o' && board[7] == 'o' && board[8] == 'o') {
					cout << "'o' wins!" << endl;
						loopInit = 0;
				} else if (board[0] == 'o' && board[3] == 'o' && board[6] == 'o') {
					cout << "'o' wins!" << endl;
						loopInit = 0;
				} else if (board[1] == 'o' && board[4] == 'o' && board[7] == 'o') {
					cout << "'o' wins!" << endl;
						loopInit = 0;
				} else if (board[2] == 'o' && board[5] == 'o' && board[8] == 'o') {
					cout << "'o' wins!" << endl;
						loopInit = 0;
				} else if (board[0] == 'o' && board[4] == 'o' && board[8] == 'o') {
					cout << "'o' wins!" << endl;
						loopInit = 0;
				} else if (board[2] == 'o' && board[4] == 'o' && board[6] == 'o') {
					cout << "'o' wins!" << endl;
						loopInit = 0;
				}

					//check for tie

				if (loopInit == 1) {
					int acc = 0;
					int tie;
					for (int i=0; i<=9; i++) {
						tie = board[i];
						if (tie > 58) {
							acc++;
							if (acc == 9) {
								cout << "It's a tie!!!" << endl;
								loopInit = 0;
							}
						}
					}
				}
					// x's turn

					if(loopInit == 1) {

						cout << "x's turn " << endl;
						cin >> x;

						switch (x) {
							case 1 : board[0] = 'x';
								break;
							case 2 : board[1] = 'x';
								break;
							case 3 : board[2] = 'x';
								break;
							case 4 : board[3] = 'x';
								break;
							case 5 : board[4] = 'x';
								break;
							case 6 : board[5] = 'x';
								break;
							case 7 : board[6] = 'x';
								break;
							case 8 : board[7] = 'x';
								break;
							case 9 : board[8] = 'x';
						}

							// check for win condition

							if (board[0] == 'x' && board[1] == 'x' && board[2] == 'x') {
									cout << "'x' wins!" << endl;
										loopInit = 0;
								} else if (board[3] == 'x' && board[4] == 'x' && board[5] == 'x') {
									cout << "'x' wins!" << endl;
										loopInit = 0;
								} else if (board[6] == 'x' && board[7] == 'x' && board[8] == 'x') {
									cout << "'x' wins!" << endl;
										loopInit = 0;
								} else if (board[0] == 'x' && board[3] == 'x' && board[6] == 'x') {
									cout << "'x' wins!" << endl;
										loopInit = 0;
								} else if (board[1] == 'x' && board[4] == 'x' && board[7] == 'x') {
									cout << "'x' wins!" << endl;
										loopInit = 0;
								} else if (board[2] == 'x' && board[5] == 'x' && board[8] == 'x') {
									cout << "'x' wins!" << endl;
										loopInit = 0;
								} else if (board[0] == 'x' && board[4] == 'x' && board[8] == 'x') {
									cout << "'x' wins!" << endl;
										loopInit = 0;
								} else if (board[2] == 'x' && board[4] == 'x' && board[6] == 'x') {
									cout << "'x' wins!" << endl;
										loopInit = 0;
								}
						}

						if(loopInit == 0) {
							cout << "would you like to play again? enter 1 for yes, 0 for no" << endl;
							cin >> playAgain; // playAgain exists to avoid stack smashing

							if(playAgain == 1) {
								loopInit = playAgain;
								for(int i=0; i <= 9; i++) // reset gameBoard,
									board[i] = 49 + i;	// uses ascii to resolve type difference
								} else {
								cout << "Thank you for playing!" << endl;
							}
						}
		}

	return 0;
}


