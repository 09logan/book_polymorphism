#include<iostream>
#include "Novel.h"

using namespace std;
int main()
{
    string aname;
    string gender;
    string nameofnovel;
    float quantity;
    float price;
    string genre;
    string email;
    bool priceless;
    cout<<"enter the author name";
    getline(cin,aname);
    cin.get();
    cout<<"enter the gender";
    getline(cin,gender);
    cin.get();
    cout<<"enter the name of novel";
    getline(cin,nameofnovel);
    cin.get();
    cout<<"enter the genre";
    getline(cin,genre);
    cin.get();
    cout<<"enter the mailing address";
    getline(cin,email);
    cin.get();
    cout<<"enter the quantity";
    cin>>quantity;
    cout<<"enter the price of the book";
    cin>>price;
    cout<<"Is it priceless";
    cin>>priceless;

   Author testauthor(aname,gender,email);
   Novel nobel(testauthor,nameofnovel,genre,price,quantity,priceless);Book(nameofnovel,testauthor,price,quantity);
    cout<<"A worth"<<nobel.getprice()<<" of genre "<<nobel.getgenre()<<"\n"<<" Book named "<<nobel.toString()<<endl;

}
