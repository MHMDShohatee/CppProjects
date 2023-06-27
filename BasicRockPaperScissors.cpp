#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Projects.h"

int getPlayerChoice()
{
	int pChoice;

	std::cout << "Enter your choice: 1-Rock , 2-Paper, 3-Scissors: ";
	std::cin >> pChoice;

	while (std::cin.fail() || pChoice < 1 || pChoice > 3)
	{
		std::cout << "Invalid input. Please enter a valid choice: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> pChoice;
	}
	return pChoice;
}

int getComputerChoice()
{
	return std::rand() % 3 + 1;
}

void printWinner(int playerChoice, int computerChoice)
{
	if (playerChoice == computerChoice)
	{
		std::cout << "It's a tie! \n";
	}
	else if ((playerChoice == 1 && computerChoice == 3) ||
		(playerChoice == 2 && computerChoice == 1) ||
		(playerChoice == 3 && computerChoice == 2))
	{
		std::cout << "\nPlayer Wins!\n\n";
	}
	else
	{
		std::cout << "\nComputer Wins!\n\n";
	}
}

void RPS()
{
	//Update to make it two players next time, single player for now
	std::cout << "Welcome to Rock Paper Scissors! \n" << std::endl;

	while (true)
	{
		std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed the random number generator

		int playerChoice = getPlayerChoice();
		int computerChoice = getComputerChoice();

		std::cout << "\nPlayer Chooses: " << playerChoice << std::endl;
		std::cout << "Comptuer Chooses: " << computerChoice << std::endl;

		printWinner(playerChoice, computerChoice);

		char playAgain;
		std::cout << "Do you want to play again? (Y/N): ";
		std::cin >> playAgain;

		if (playAgain != 'Y' && playAgain != 'y')
		{
			break;
		}

		std::cout << std::endl;
	}
}

