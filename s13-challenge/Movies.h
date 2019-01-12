/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movie as a std::vector
 *  implement these methods in Movies.cpp
 *
 * ***************************************************************/

#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie*> movies;
public:
    Movies();             // Constructor
    ~Movies();          // Destructor
    Movie* get_movie(std::string name);
    void add_movie(std::string name, std::string rating, int watched);
    void delete_movie(std::string name);
    void increment_watched(std::string name);
    void display() const;
};

#endif // _MOVIES_H_
