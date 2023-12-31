#include "../header/Movie.h"


#include <cassert>
#include <iostream>

#include <string>



//Initialize Constructor
Movie::Movie(std::string title, int year, std::string genre, std::string subGenre, std::string cast, std::string director, double rating, int trendScore){
    this->title = title;
    this->year = year;
    this->genre = genre;
    this->subGenre = subGenre;
    this->cast = cast;
    this->director = director;
    this->rating = rating;
    this->trendScore = trendScore;
}


//Setters
void Movie::setTitle(const std::string& newTitle){
    this->title = newTitle;
}

void Movie::setYear(int newYear){
    this->year = newYear;
}

void Movie::setGenre(const std::string& newGenre){
    this->genre = newGenre;
}

void Movie::setSubGenre(const std::string& newSubGenre){
    this->subGenre = newSubGenre;
}

void Movie::setCast(const std::string& newCast){
    this->cast = newCast;
}

void Movie::setDirector(const std::string& newDirector){
    this->director = newDirector;
}

void Movie::setRating(double newRating){
    this->rating = newRating;
}

void Movie::setTrendScore(int trendScore) {
    this->trendScore = trendScore;
}


//Getters
std::string Movie::getTitle() const{
    return this->title;
}

int Movie::getYear() const{
    return this->year;
}

std::string Movie::getGenre() const{
    return this->genre;
}

std::string Movie::getSubGenre() const{
    return this->subGenre;
}

std::string Movie::getCast() const{
    return this->cast;
}

std::string Movie::getDirector() const{
    return this->director;
}

double Movie::getRating() const{
    return this->rating;
}

int Movie::getTrendScore() const{
    return trendScore;
}


//Incorporate in display method

