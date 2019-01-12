#include "Menu.h"
#include <iostream>
#include <string>

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::display()
{
    std::cout << "\n------- MENU -------\n";
    std::cout << "P - Print movies\n" ;
    std::cout << "A - Add movie\n";
    std::cout << "D - Delete movie\n";
    std::cout << "I - Increment watch count\n";
    std::cout << "Q - Quit\n";
    std::cout << "\nEnter your choice: ";
}

char Menu::get_choice()
{
    std::string input {};
    std::getline(std::cin, input);
    if (input == "") input = "empty";
    return toupper(input.at(0));
}

std::string Menu::get_name()
{
    std::string input {""};
    while (input == "") {
        std::cout << "Enter a name: ";
        std::getline(std::cin, input);
    }
    return input;
}

std::string Menu::get_rating()
{
    std::cout << "Enter a rating (G, PG, PG-13, R) or press ENTER: ";
    std::string input {};
    std::getline(std::cin, input);
    if (input == "") input = "Unkown";
    return input;
}

int Menu::get_watched()
{
    int num {1};
    std::cout << "Enter a number (watch count) or press ENTER: ";
    std::string input {};
    std::getline(std::cin, input);
    if (input != "") num = std::stoi( input );
    return num;
}
