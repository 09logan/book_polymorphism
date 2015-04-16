#include<iostream>
using namespace std;
#include "Book.h"
class Textbook:public Book
{
private:
    string subject;
    string bookname;
    Author authorname;
    float price;
    bool hardcover;
    float version;

public:
    Textbook(Author Author_name,string,string,float,float,bool);
    void setsubject(string);
    string getsubject();
    void setprice(float);
    float getprice();
    void setversion(float);
    float getversion();
    void hardcovered(bool);
    bool ishardcovered();
    string tostring();

    };

