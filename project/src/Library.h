#include <vector>
#include "Book.h"

class Library{
    private:
    std::vector<Book> books;

    public:
    void add_book(Book book){
        books.push_back(book);
    }
    void display_books(){
        for(int i = 0; i < books.size(); i++){
            cout << i + 1 << ". " << books[i].get_details() << endl;
        }
    }
    void remove_book(int index){
        books.erase(books.begin() + index - 1);
    }

    int get_total_books(){
        return books.size();
    }
};