#include "Library.h"
#include "User.cpp"
#include <iostream>

using namespace std;

void show_main_menu(User user){
    int option;

    cout<<"Welcome to the library!"<<endl;
    cout<<"Would you like to: "<<endl;
    cout<<"1. Add a new book to the library"<<endl;
    cout<<"2. Remove a book from the library"<<endl;
    cout<<"3. Borrow a book"<<endl;
    cout<<"4. Return a book"<<endl;
    cout<<"5. Display details of available books and borrowed books"<<endl;
    cout<<"6. Search for a book"<<endl;

    cin>>option;
}