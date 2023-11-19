#ifndef MOVIEDATABASE_HPP
#define MOVIEDATABASE_HPP

class movieDatabase {
    private:
        std::vector<Movie> movieList;

    public:
        movieDatabase();
        ~movieDatabase();
        void addMovie(Movie movie);
        Movie search();
        std::vector<Movie> getMovies();

};

#endif /* MOVIEDATABASE_HPP */