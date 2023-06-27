#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Projects.h"

void playGuessingGame()
{ 
	int guess, attempts = 0;
	char pAgain;
	int random = std::rand() % 100;

	while (true)
	{
		std::cout << "Guess a number 1-99: ";
		std::cin >> guess;

		if (std::cin.fail()) {
			std::cout << "Invalid input. Please enter a valid number.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		attempts++;

		if (guess == random) {
			std::cout << "Congrats! You guessed the correct number in " << attempts << " attempts!" << std::endl;
			std::cout << "Play again? Yes or No (Y/N): ";
			std::cin >> pAgain;
			if (pAgain != 'Y' && pAgain != 'y')
			{
				return;
			}
			else
			{
				playGuessingGame();
			}
		}
		else if (guess < random)
		{
			std::cout << "Too low. Try again.\n";
		}
		else {
			std::cout << "Too high. Try again. \n";
		}

	}
}

void GuessingGame() 
{
	int choice;

	std::cout << "Welcome to Guessing Game!\n" 
		<< "------------------------------\n"
		<< "1. Play Game\n"
		<< "2. Exit\n"
		<< std::endl;

	std::cout << "Enter your choice: ";
	std::cin >> choice;
	while (std::cin.fail() || choice < 1 || choice > 2) {
		std::cout << "Invalid input. Please enter a valid number: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> choice;
	}

	switch (choice)
	{
	case 1:
		playGuessingGame();
		break;
	case 2:
		return;
	default:
		std::cout << "I dont know what you entered but its wrong.";
		break;
	}

}