#include <vector>
#include "Book.h"
class Library {
private:
    std::vector<Book> books;

public:
    void add_book(const Book& book) {
        books.push_back(book);
    }

    void display_books()  {
        for (int i = 0; i < books.size(); i++) {
            cout << i + 1 << ". " << books[i].get_details() << endl;
        }
    }

    void display_available_books()  {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].is_available()) {
                cout << i + 1 << ". " << books[i].get_details() << endl;
            }
        }
    }

    void display_borrowed_books(User& user) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].borrower_username == user.username) {
                cout << i + 1 << ". " << books[i].get_details() << endl;
            }
        }
    }

    void display_availability() {
        for (int i = 0; i < books.size(); i++) {
            cout << i + 1 << ". " << books[i].get_details() << (books[i].is_available() ? " Available" : " Borrowed") << endl;
        }
    }

    void remove_book(int index) {
        if (index >= 1 && index <= books.size()) {
            books.erase(books.begin() + index - 1);
        } else {
            cout << "Invalid book index. Please try again." << endl;
        }
    }

    void borrow_book(int index, User& user) {
        if (index >= 1 && index <= books.size()) {
            books[index - 1].borrow(user);
        } else {
            cout << "Invalid book index. Please try again." << endl;
        }
    }

    void return_book(int index) {
        if (index >= 1 && index <= books.size()) {
            books[index - 1].return_book();
        } else {
            cout << "Invalid book index. Please try again." << endl;
        }
    }

    int get_total_books() const {
        return books.size();
    }

    vector<Book> get_books() const{
        return books;
    }
};
