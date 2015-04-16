#include <iostream>
#include "TextBook.h"

using namespace std;

TextBook::TextBook(string bookName, Author authorName, float bookPrice, string textSubject,string textPublisher,string textEdition)
    :Book( bookName, authorName, bookPrice)
{
    setSubject(textSubject);
    setEdition(textEdition);
    this->publisher = textPublisher;
}

void TextBook::setSubject(string textSubject)
{
    this->subject = textSubject;
}

void TextBook::setEdition(string textEdition)
{
    this->edition = textEdition;
}

string TextBook::getSubject()
{
    return subject;
}

string TextBook::getPublisher()
{
    return publisher;
}

string TextBook::getEdition()
{
    return edition;
}

string TextBook :: toString()
{
    return " Subject: " + subject + " Publisher: " + publisher + " Edition: " + edition;
}
