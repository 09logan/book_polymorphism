#include<iostream>
#include "Book.h"
using namespace std;
class Novel:public Book
{
private:
    string genre;
    float price;
    bool Ispriceless;
    string nameofnovel;
    Author authorname;
    float quantity;

    public:
    Novel(Author author_name,string,string,float,float,bool);
 void setIspriceless(bool);
    bool getIspriceless();
    void setquantity(float);
    float getquantity();
    void setgenre(string);
    string getgenre();
    void setprice(float);
    float getprice();
    string tostring();



};
