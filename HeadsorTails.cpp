#include <iostream>
#include "Projects.h"

void playGame() 
{
	while (true)
	{
		std::string pAgain;
		int random = std::rand() % 2;
		int pChoice;

		std::cout << "Enter 1 for heads, 2 for tails. \nPick your choice: ";
		std::cin >> pChoice;

		if (pChoice == random)
		{
			std::cout << "Good choice! You win!" << std::endl;
		}
		else {
			std::cout << "You lose! Skill issue." << std::endl;
		}

		std::cout << "Try again? Yes or No (Y/N): ";
		std::cin >> pAgain;

		if (pAgain != "Y" || pAgain != "y") 
		{
			break;
		}
	}
}

void HeadsOrTails() 
{
	
	while (true)
	{
		int choice;

		std::cout << "\n\nHeads or Tails!" << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "1. Play Game\n2.Exit" << std::endl;
		std::cout << "Enter your choice gamer: ";
		std::cin >> choice;

		while (std::cin.fail() || choice < 1 || choice > 2)
		{
			std::cout << "Invalid. Enter valid number: ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> choice;
		}

		switch (choice)
		{
		case 1:
			playGame();
			break;
		case 2:
			std::cout << "Leaving Heads or Tails..." << std::endl;
			return;
		default:
			std::cout << "You entered something invalid" << std::endl;
			break;
		}

	}
};
