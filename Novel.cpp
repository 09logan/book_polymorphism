
#include <iostream>
#include "Novel.h"
#include <string>

using namespace std;

Novel::Novel(string bookName, Author authorName, float bookPrice, bool novelCover, string novelGenre, string novelPublisher)
:Book( bookName, authorName, bookPrice)
{
    this->isHardCover = novelCover;
    this->genre = novelGenre;
    this->publisher = novelPublisher;

}

bool Novel::getCover()
{
    return isHardCover;
}

string Novel::getGenre()
{
    return genre;
}

string Novel::getPublisher()
{
    return publisher;
}

string Novel :: toString()
{
    string cover;
    if (getCover() == 1)
        cover = "There is a cover";
    else
        cover = "There is no cover";

    return cover + " Genre: " +getGenre() + " Publisher: " +getPublisher()+ " publications ";
}
