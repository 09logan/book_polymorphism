
#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(string bookName, Author authorName, float bookPrice)
{
    this->name = bookName;
    this->author = authorName;
    setPrice(bookPrice);
}
Book::Book(string bookName, Author authorName, float bookPrice, int bookQuantity)
{
    this->name = bookName;
    this->author = authorName;
    setPrice(bookPrice);
    setQuantity(bookQuantity);
}
void Book::setPrice(float bookPrice)
{
    this->price = bookPrice;
}
void Book::setQuantity(int bookQuantity)
{
    this->quantity = bookQuantity;
}

string Book::getName()
{
    return name;
}
Author Book::getAuthor()
{
    return author;
}
float Book::getPrice()
{
    return price;
}
int Book::getQuantity()
{
    return quantity;
}


