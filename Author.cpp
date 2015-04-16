
#include <iostream>
#include "Author.h"

using namespace std;

Author::Author(){
}
Author::Author(string authorName, string authorGender, string authorEmail)
{
    this->name =  authorName;
    this->gender = authorGender;
    setEmail(authorEmail);
}

void Author::setEmail(string authorEmail)
{
    this->email = authorEmail;
}

string Author::getName()
{
    return name;
}

string Author::getGender()
{
    return gender;
}

string Author::getEmail()
{
    return email;
}

string Author::toString()
{
    return getName() + "  at  " + getEmail() + " who is "+getGender();
}
