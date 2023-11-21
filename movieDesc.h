#ifndef MOVIEDESC_H
#define MOVIEDESC_H

#include <iostream>
#include <iomanip>

using namespace std;

class MovieDesc {
    public:
        MovieDesc(const Movie& movie);
        void printMovieInfo() const;

    private:
        const Movie& movie;
};

#endif