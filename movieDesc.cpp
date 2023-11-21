#include "movieDesc.h"

MovieDesc::MovieDesc(const Movie& movie) : movie(movie) {}

void MovieDesc::printMovieInfo() const {

    std::cout << std::left << std::setw(15) << "Title: " << movie.title << std::endl;
    std::cout << std::left << std::setw(15) << "Year: " << movie.year << std::endl;
    std::cout << std::left << std::setw(15) << "Genre: " << movie.genre << std::endl;
    std::cout << std::left << std::setw(15) << "SubGenre: " << movie.subGenre << std::endl;
    std::cout << std::left << std::setw(15) << "Cast: " << movie.cast << std::endl;
    std::cout << std::left << std::setw(15) << "Director: " << movie.director << std::endl;
    std::cout << std::left << std::setw(15) << "Rating: " << movie.rating << std::endl;

}