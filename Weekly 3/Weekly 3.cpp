#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>


void level1() {
	int number = 0;
	srand(time(0));
	number = rand() % 5 + 1;
	int guess = 0;
	int tries = 0;
	do {
		std::cout << "Enter a number: ";
		std::cin >> guess;
		tries++;

		if (guess < number)
			std::cout << "Your number is too low, try again.\n";
		else if (guess > number)
			std::cout << "Your number is to high, try again.\n";
		else
			std::cout << "Your guess is correct! You got it in " << tries << " guesses!\n";

	} while (guess != number);
}
void level2() {
	int number = 0;
	srand(time(0));
	number = rand() % 10 + 1;
	int guess = 0;
	int tries = 0;
	do {
		std::cout << "Enter a number: ";
		std::cin >> guess;
		tries++;

		if (guess < number)
			std::cout << "Your number is too low, try again.\n";
		else if (guess > number)
			std::cout << "Your number is to high, try again.\n";
		else
			std::cout << "Your guess is correct! You got it in " << tries << " guesses!\n";
	} while (guess != number);
}
void level3() {
	int number = 0;
	srand(time(0));
	number = rand() % 30 + 1;
	int guess = 0;
	int tries = 0;
	do {
		std::cout << "Enter a number: ";
		std::cin >> guess;
		tries++;

		if (guess < number)
			std::cout << "Your number is too low, try again.\n";
		else if (guess > number)
			std::cout << "Your number is to high, try again.\n";
		else
			std::cout << "Your guess is correct! You got it in " << tries << " guesses!\n";
	} while (guess != number);
}
int main()
{
	bool flag = true;
	int option = 0;
	do {
		std::cout << "Welcome to Guess a number game! Select which level you want to play:\n";
		std::cout << "1.Easy (1-5)\n";
		std::cout << "2.Medium (1-10)\n";
		std::cout << "3.Hard (1-30)\n";
		std::cout << "4.Exit\n";

		std::cin >> option;
		switch (option) {
		case 1:
			std::cout << "You are playing easy (1-5)\n";
			level1();
			break;
		case 2:
			std::cout << "You are playing medium (1-10)\n";
			level2();
			break;
		case 3:
			std::cout << "You are playing hard (1-30)\n";
			level3();
			break;

		case 4:
			std::cout << "Thank you for playing. Have a nice day!\n";
			flag = false;
			break;
		default:
			std::cout << "invalid input\n";
			break;
		}
	} while (flag == true);
	system("pause");
	return 0;
}
