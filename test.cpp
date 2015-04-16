#include<iostream>
using namespace std;
#include "Textbook.h"
#include "Novel.h"
#include "Book.h"
int main()
{
    int value;
    string aname;
    string gender;
    string email;
    string genre;
    string subject;
    string bookname;
    string nameofnovel;
    float quantity;
    float version;
    float price;
    bool hardcover;
    cout<<"enter the name of author::";
     getline(cin,aname);
     cin.get();

    cout<<"enter the gender::";
     getline(cin,gender);
     cin.get();

    cout<<"enter the mail address::";
     getline(cin,email);
     cin.get();

      cout<<"enter the quantity::";
    cin>>quantity;

    cout<<"enter the pricing::";
    cin>>price;

    Author testauthor(aname,gender,email);

    cout<<"Select the category :: 1 for novel and 2 for text book"<<endl;
    cin>>value;
    if(value==1)
    {
        cout<<"enter the name of novel::";
    getline(cin,nameofnovel);
     cin.get();

    cout<<"enter the genre::";
    getline(cin,genre);
      cin.get();


    cout<<"Is it hard covered?::"<<endl;
    cin>>hardcover;


    Textbook testtextbook(testauthor,subject,bookname,price,version,hardcover);Book(bookname,testauthor,price);
    /*cout<<testtextbook.getsubject()<<" of version "<<testtextbook.getversion()<<" Book named "<<testtextbook.toString()<<endl;
    cout<<"The price is"<<testtextbook.getBookPrice();*/

    Book *book_b=&testtextbook;
    cout<<book_b->tostring();
    }
    else
    {

    cout<<"enter the book name::";
    getline(cin,bookname);
    cin.get();

    cout<<"enter the subject::";
    getline(cin,subject);
    cin.get();

    cout<<"enter the version of the book::";
    cin>>version;
    cout<<"Is it hard covered?::"<<endl;
    cin>>hardcover;

    Novel nobel(testauthor,nameofnovel,genre,price,quantity,hardcover);Book(nameofnovel,testauthor,price,quantity);
   /* cout<<"A worth"<<nobel.getprice()<<" of genre "<<nobel.getgenre()<<"\n"<<" Book named "<<nobel.toString()<<endl;*/

    Book *book1_b=&nobel;
    cout<<book1_b->tostring();
    }













}

