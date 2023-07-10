#include <iostream>
#include "Projects.h"

//save

//load

int main()
{

	while (true) 
	{
		int choice;

		std::cout << "Welcome to the Project Arcade!\n"
			<< "------------------------------\n"
			<< "What project do you want to open?\n\n"
			<< "1. Rock Paper Scissors\n"
			<< "2. Heads or Tails\n"
			<< "3. Calculator\n"
			<< "4. Task Manager\n"
			<< "5. Text-Base Guessing Game\n"
			<< "6. Exit\n"
			<< std::endl;

		std::cout << "Enter your project choice to open: ";
		std::cin >> choice;

		while (std::cin.fail() || choice < 1 || choice > 6) {
			std::cout << "Invalid. Please enter a number: ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> choice;
		}

		switch (choice)
		{
		case 1:
			RPS();
			break;
		case 2:
			HeadsOrTails();
			break;
		case 3:
			Calculator();
			break;
		case 4:
			TaskManager();
			break;
		case 5:
			GuessingGame();
			break;
		case 6:
			std::cout << "Leaving Project Arcade...";
			return 0;
		default:
			break;
		}


	}
}