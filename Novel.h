#include <iostream>
#include "Book.h"
# ifndef NOVEL_H
# define NOVEL_H
using namespace std;

class Novel : public Book
{
private:
    bool isHardCover;
    string genre;
    string publisher;
public:
    string toString();
    Novel(string bookName, Author authorName, float bookPrice, bool novelCover, string novelGenre, string novelPublisher);
    bool getCover();
    string getGenre();
    string getPublisher();


};
# endif
