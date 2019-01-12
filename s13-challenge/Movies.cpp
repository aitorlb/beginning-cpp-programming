/******************************************************************
 * Section 13 Challenge
 * Movies.h
 *
 * Models a collection of Movies as a std::vector
 *
 * ***************************************************************/
#include <iostream>
#include "Movies.h"
#include "Movie.h"


Movies::Movies()
{
}


Movies::~Movies()
{
}

Movie* Movies::get_movie(std::string name)
{
    Movie* movie_ptr {nullptr};
    for (const auto& m : movies)
        if (m->get_name() == name) movie_ptr = m;
    return movie_ptr;
}

void Movies::add_movie(std::string name, std::string rating, int watched)
{
    Movie* movie_ptr {get_movie(name)};

    if (movie_ptr) {
        std::cout << name << " already exists" <<  std::endl;
    } else {
        Movie* new_movie_ptr = new Movie(name, rating, watched);
        movies.push_back(new_movie_ptr);
        std::cout << name << " added" << std::endl;
    }
}

void Movies::delete_movie(std::string name)
{
    bool found {false};
    for (size_t i {0}; i < movies.size(); ++i) {
        if (movies[i]->get_name() == name) {
            delete movies[i];
            movies.erase(movies.begin()+i);
            found = true;
            std::cout << name << " deleted" <<  std::endl;
        }
    }
    if (!found)
        std::cout << name << " not found" <<  std::endl;
}

void Movies::increment_watched(std::string name)
{
    Movie* movie_ptr  {get_movie(name)};

    if (movie_ptr) {
        movie_ptr->increment_watched();
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

void Movies::display() const
{
    if (movies.empty()) {
        std::cout << "Sorry, no movies to display" <<  std::endl;
    } else {
        std::cout << "\n===================================\n";
        std::cout << "    Name | Rating | Watch Count\n\n";
        for (const auto& m : movies)
            m->display();
        std::cout << "===================================\n";
    }
}
