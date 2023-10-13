
#include <string>
#include <iostream>

using namespace std;

class Book{
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
};