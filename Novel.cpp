#include<iostream>
#include "Novel.h"
using namespace std;
Novel::Novel(Author author_name,string novelname,string Ngenre,float Nprice,float fquantity,bool NIspriceless):Book(novelname,author_name,Nprice,fquantity)
{
    setgenre(Ngenre);
    setprice(Nprice);
    this->nameofnovel=novelname;
    this->authorname=authorname;
    setquantity(fquantity);
    setIspriceless(NIspriceless);
    }

void Novel::setquantity(float fquantity)
{
   this->quantity=fquantity;
}
float Novel::getquantity()
{
    return quantity;
}
void Novel::setgenre(string Genre)
{
    this->genre=Genre;

}

string Novel::getgenre()
{
    return genre;
}

void Novel::setprice(float Price)
{

this->price=Price;
}

float Novel::getprice()
{
    return price;
}

void Novel::setIspriceless(bool priceless)
{
    this->Ispriceless=priceless;
}
bool Novel::getIspriceless()
{
    return Ispriceless;
}
string Novel::tostring()
{
 cout<<"A worth"<<getprice()<<" of genre "<<getgenre()<<" Book named ";
}

