
#include <string>
#include <iostream>
#include "User.h"

using namespace std;

class Book{
    public:
    string borrower_username;

    private:
    string title;
    string author;
    string isbn;
    bool available;

    public:
    Book(string t, string a, string i):title(t), author(a), isbn(i), available(true){};
    string get_details(){
        return title + " by " + author + ", ISBN: " + isbn;
    }
    bool is_available(){
        return available;
    }
    void borrow(User user){
        available = false;
        borrower_username = user.username;
    }
    void return_book(){
        available = true;
        borrower_username = "";
    }

    string get_author() const{
        return title;
    }

    string get_isbn() const{
        return title;
    }

    string get_title() const{
        return title;
    }

};