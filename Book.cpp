
#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string book_name, Author author_name, float price)
{
    this->bookName = book_name;
    this->authorName = author_name;
    setBookPrice(price);
}

Book::Book(string book_name, Author author_name, float price, int quantity)
{
    this->bookName = book_name;
    this->authorName = author_name;
    setBookPrice(price);
    setBookQuantity(quantity);
}

void Book::setBookPrice(float price)
{
    this->bookPrice = price;
}

void Book::setBookQuantity(int quantity)
{
    this->bookQuantity = quantity;
}

string Book::getBookName()
{
    return bookName;
}


float Book::getBookPrice()
{
    return bookPrice;
}

int Book::getBookQuantity()
{
    return bookQuantity;
}

/*string Book::toString()
{
    return  getBookName() + " by " + authorName.toString();
}*/
