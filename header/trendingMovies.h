#ifndef TRENDINGMOVIES_HPP
#define TRENDINGMOVIES_HPP

class Movie;

class TrendingMovies {
    private:
        std::vector<Movie> trendingMovieList;

    public:
        void addTrendingMovie(Movie m);
        TrendingMovies();
        ~TrendingMovies();
};


#endif