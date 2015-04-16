#include<iostream>
using namespace std;
#include "Textbook.h"


Textbook::Textbook(Author author_name,string fsubject,string fbookname,float fprice,float fversion,bool fhardcover):Book(fbookname,author_name,fprice)
{
    this->authorname=author_name;
    this->bookname=fbookname;
    setsubject(fsubject);
    setprice(fprice);
    setversion(fversion);
    hardcovered(fhardcover);
}

void Textbook::setsubject(string fsubject)
{
this->subject=fsubject;
}
string Textbook::getsubject()
{
    return subject;
}
void Textbook::setprice(float fprice)
{
    this->price=fprice;
}
float Textbook::getprice()
{
    return price;
}
void Textbook::setversion(float fversion)
{
    this->version=fversion;
}
float Textbook::getversion()
{
    return version;
}
void Textbook::hardcovered(bool fhardcover)
{
    this->hardcover=fhardcover;
}
bool Textbook::ishardcovered()
{
    return hardcover;
}
string Textbook::toString()
{
    cout<<getsubject()<<" of version "<<getversion()<<" Book named "<<testtextbook.toString()<<endl;
    cout<<"The price is"<<getBookPrice();
    return  Author::getBookName() + " by " + Author::toString();
}

