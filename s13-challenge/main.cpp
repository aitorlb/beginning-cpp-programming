/******************************************************************
 * Section 13 Challenge
 * main.cpp
 *
 * Test the Movies project
 *
 * ***************************************************************/
#include <iostream>
#include "Movies.h"
#include "Menu.h"

int main ()
{
    bool running {true};
    Menu menu;
    Movies movies;
    char choice {};

    while (running) {

        menu.display();
        choice = menu.get_choice();

        switch (choice) {
        case 'P':
            movies.display();
            break;

        case 'A': {
            std::string name = menu.get_name();
            std::string rating = menu.get_rating();
            int watched = menu.get_watched();
            movies.add_movie(name, rating, watched);
            break;
        }

        case 'D': {
            std::string name = menu.get_name();
            movies.delete_movie(name);
            break;
        }

        case 'I': {
            std::string name = menu.get_name();
            movies.increment_watched(name);
            break;
        }

        case 'Q':
            std::cout << "Goodbye\n";
            running = false;
            break;

        default:
            std::cout << "You must enter a valid letter\n";
        }
    }

    std::cout <<  std::endl;
    return 0;
}
