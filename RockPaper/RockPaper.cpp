#include <iostream>
using namespace std;

int main() {
	int game = 0;
	int score = 0;
	int count = 1;
	do {

		int pcValue  ;
		string userValue, getUser, getPC , playAgain;

		/*Begin Message*/
		cout << " rock, paper and scissors Game! " << endl;
		cout << " Rock - r , Paper - p, Scissor -s " << endl;
		cout << " Choose the following options " << endl;
		cin >> userValue;

		/*cout << "Your Value is : " << userValue;*/

		/*Pc get random value*/
		srand(time(0));
		pcValue = rand() % 3 + 1;
		/*cout << "random is" << pcValue;*/

		if (pcValue == 1) {
			getPC = "rock";
		}
		else if (pcValue == 2) {
			getPC = "paper";
		}
		else if (pcValue == 3) {
			getPC = "scissor";
		}
		else {
			cout << " Pc Random Value is Error!! " << endl;
		}


		/*User value set*/
		if (userValue == "r") {
			getUser = "rock";
		}
		else if (userValue == "p") {
			getUser = "paper";
		}
		else if (userValue == "s") {
			getUser = "scissor";
		}
		else {
			cout << " User input not correct Please try again !!" << endl;
		}


		/*Check Values*/
		if (getPC == getUser) {
			cout << " Its a tie " << endl;
			cout << " User value and Pc value are same " << getPC << endl;
			cout << " Score is: " << score << endl;

			cout << "Do you want play Again ? (Yes = y , No = n)" << endl;
			cin >> playAgain;

			if (playAgain == "y") {
				count++;
				cout << "Level " << count << endl;
			}
			else {
				cout << "Thank you for playing this game "  << endl;
				cout << "Your Score is:  " << score << endl;
				
				game = 1;
			}

		}
		else if (getUser == "rock" && getPC == "scissor") {
			cout << " Player Win " << endl;
			cout << " Player Won by : " << getUser << endl;
			cout << " Pc loss by : " << getPC << endl;
			score = score + 5;
			cout << " Score is: " << score << endl;

			cout << "Do you want play Again ? (Yes = y , No = n)" << endl;
			cin >> playAgain;

			if (playAgain == "y") {
				count++;
				cout << "Level " << count << endl;
			}
			else {
				cout << "Thank you for playing this game "  << endl;
				cout << "Your Score is:  " << score << endl;
				game = 1;
			}
		}
		else if (getUser == "scissor" && getPC == "paper") {
			cout << "Player Win" << endl;
			cout << "Player Won by : " << getUser << endl;
			cout << "Pc loss by : " << getPC << endl;
			score = score + 5;
			cout << "Score is: " << score << endl;

			cout << "Do you want play Again ? (Yes = y , No = n)" << endl;
			cin >> playAgain;

			if (playAgain == "y") {
				count++;
				cout << "Level " << count << endl;
			}
			else {
				cout << "Thank you for playing this game "  << endl;
				cout << "Your Score is:  " << score << endl;
				game = 1;
			}
		}
		else if (getUser == "paper" && getPC == "rock") {
			cout << " Player Win" << endl;
			cout << " Player Won by : " << getUser << endl;
			cout << " Pc loss by : " << getPC << endl;
			score = score + 5;
			cout << " Score is: " << score << endl;

			cout << "Do you want play Again ? (Yes = y , No = n)" << endl;
			cin >> playAgain;

			if (playAgain == "y") {
				count++;
				cout << "Level " << count << endl;
			}
			else {
				cout << "Thank you for playing this game "  << endl;
				cout << "Your Score is:  " << score << endl;
				game = 1;
			}
		}
		else {
			cout << " You loss Computer Win!!!" << endl;
			cout << " Player loss by : " << getUser << endl;
			cout << " Pc won by : " << getPC << endl;
			cout << " Score is: " << score << endl;
			count++;

			cout << "Do you want play Again ? (Yes = y , No = n)" << endl;
			cin >> playAgain;

			if (playAgain == "y") {
				count++;
				cout << "Level " << count <<endl;
			}
			else {
				cout << "Thank you for playing this game "  << endl;
				cout << "Your Score is:  " << score << endl;
				game = 1;
			}
		};
	} while (game == 0);
}