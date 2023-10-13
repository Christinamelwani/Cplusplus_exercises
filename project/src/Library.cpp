#include "Library.h"
#include "User.cpp"
#include <iostream>

using namespace std;

void add_book(Library &library) {
    string title, author, isbn;

    cin.ignore();
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter author: ";
    getline(cin, author);
    cout << "Enter ISBN: ";
    getline(cin, isbn);

    Book new_book(title, author, isbn);
    library.add_book(new_book);
}

void remove_book(Library &library) {
    library.display_books();

    int to_remove;
    cout << "Type the number of the book you would like to remove (0 to cancel): ";
    cin >> to_remove;

    if (to_remove > 0 && to_remove <= library.get_total_books()) {
        library.remove_book(to_remove);
        cout << "Book removed successfully." << endl;
    } else if (to_remove != 0) {
        cout << "Invalid book number. Please try again." << endl;
    }
}

void show_main_menu(User user) {
    int option;
    Library library;

    while (option != 7) {
        cout << "Welcome to the library!" << endl;
        cout << "Would you like to: " << endl;
        cout << "1. Add a new book to the library" << endl;
        cout << "2. Remove a book from the library" << endl;
        cout << "3. Borrow a book" << endl;
        cout << "4. Return a book" << endl;
        cout << "5. Display details of available books and borrowed books" << endl;
        cout << "6. Search for a book" << endl;
        cout << "7. Exit" << endl;
        cin >> option;

        switch (option) {
            case 1:
                add_book(library);
                break;
            case 2:
                remove_book(library);
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}
