#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>

class Menu
{
public:
    Menu();
    ~Menu();
    void display();
    char get_choice();
    std::string get_name();
    std::string get_rating();
    int get_watched();
};

#endif // MENU_H
