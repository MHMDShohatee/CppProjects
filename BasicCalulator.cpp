// BasicCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Projects.h"

double Add(double x, double y)
{
    double result;
    result = x + y;
    std::cout << '\n' << x << " + " << y << " = " << result << '\n' << std::endl;

    return result;
}

double Subtract(double x, double y)
{
    double result;
    result = x - y;
    std::cout << '\n' << x << " - " << y << " = " << result << '\n' << std::endl;

    return result;
}

double Multiply(double x, double y)
{
    double result;
    result = x * y;
    std::cout << '\n' << x << " * " << y << " = " << result << '\n' << std::endl;

    return result;
}

double Divide(double x, double y)
{
    double result = 0.0;

    if (y != 0) {
        result = x / y;
        std::cout << '\n' << x << " / " << y << " = " << result << '\n' << std::endl;
    }
    else {
        std::cout << "\nDivision by zero is not allowed." << std::endl;
    }

    return result;
}

double Modulous(double x, double y)
{
    double result = 0.0;

    result = std::fmod(x, y);
    std::cout << '\n' << x << " % " << y << " = " << result << '\n' << std::endl;

    return result;
}

void useCalc()
{
    int num = 0;
    double x, y;

    std::cout << "\nWhat do you want to do?\n"
        << "1. Addition\n"
        << "2. Subtraction\n"
        << "3. Multiplication\n"
        << "4. Division\n"
        << "5. Modulous\n"
        << "6. Exit\n"
        << std::endl;

    std::cout << "Enter a number from the list: ";

    while (!(std::cin >> num) || num < 1 || num > 6) {
        std::cout << "Invalid input. Please enter a number 1 to 6: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (num == 6)
    {
        std::cout << "\nExiting Calculator...\n\n";
        return;
    }

    std::cout << "First Number: ";
    std::cin >> x;
    while (std::cin.fail()) {
        std::cout << "Invalid input. Please enter a valid number: ";
        std::cin.clear();
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); used to ignore and discard any remaining characters in the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> x;
    }

    std::cout << "Second number: ";
    std::cin >> y;
    while (std::cin.fail()) {
        std::cout << "Invalid input. Please enter a valid number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> y;
    }

    switch (num)
    {
    case 1:
        Add(x, y);
        useCalc();
        break;
    case 2:
        Subtract(x, y);
        useCalc();
        break;
    case 3:
        Multiply(x, y);
        useCalc();
        break;
    case 4:
        Divide(x, y);
        useCalc();
        break;
    case 5:
        Modulous(x, y);
        useCalc();
        break;
    default:
        std::cout << "You didn't enter a proper number" << std::endl;
        break;
    }

}

void Calculator()
{
    int pChoice;

    std::cout << "\nBasic Calculator!\n"
        << "------------------------\n"
        << "1. Use Calculator\n"
        << "2. Exit Calculator\n"
        << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> pChoice;
    while ( std::cin.fail() || pChoice < 1 || pChoice > 2) {
        std::cout << "Invalid input. Please enter a number 1 or 2: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> pChoice;
    }
    
    switch (pChoice)
    {
    case 1:
        useCalc();
        break;
    case 2:
        std::cout << "Leaving Calculator....\n" << std::endl;
        return;
    default:
        std::cout << "I dont know what you did my boy." << std::endl;
        break;
    }
}
