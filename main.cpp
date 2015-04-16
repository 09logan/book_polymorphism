#include <iostream>
#include <string>
#include "Author.h"
#include "TextBook.h"
#include "Novel.h"

using namespace std;

int main()
{
    string author, email, gender;
    string subject;
    string name;
    string edition, publisher, genre;
    int choice;
    bool cover;
    int quantity;
    float price;

    cout<<"Enter Authors' name \n";
    getline(cin,author);
    cout<<"Enter Authors' gender[M/F]\n";
    cin >> gender;
    cout<<"Enter Authors' Email ID:\n";
    cin.get();
    getline(cin,email);

    cout<< "\nEnter book's name \n";
    getline(cin, name);
    cout<< "Enter books price \n";
    cin>> price;
    cout<< "Enter books quantity \n";
    cin>> quantity;

    Author newAuthor(author, gender, email);

    cout<<"\n Enter 1 for Novel and 2 for TextBook: \n";
    cin>> choice;

    if(choice == 1)
    {
        cout<< "\n Enter if novel has hard cover[1 for yes and 0 for no] \n";
        cin>> cover;
        cout<< "Enter novels genre \n";
        cin.get();
        getline(cin,genre);
        cout<< "Enter novels publisher\n";
        cin.get();
        getline(cin,publisher);

        cout<<"\n Novel information: \n\n"<< endl;
        Novel novel (name, newAuthor, price, cover, genre, publisher);
        Book* book_A = &novel;
        cout << book_A->toString();
    }

    else
    {
        cout<< "\n Enter name of subject\n";
        cin>> subject;
        cout<< "Enter book edition \n";
        cin.get();
        cin>>edition;
        cout<< "Enter publisher of book: \n";
        cin.get();
        cin>> publisher;

        cout<<"\n Textbook information: \n\n"<< endl;
        TextBook text (name, newAuthor, price, subject, publisher, edition);
        Book* book_B = &text;
        cout << book_B->toString();
    }

}
