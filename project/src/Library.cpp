#include "Library.h"
#include "User.cpp"
#include <iostream>

using namespace std;

const int OPTION_ADD_BOOK = 1;
const int OPTION_REMOVE_BOOK = 2;
const int OPTION_BORROW_BOOK = 3;
const int OPTION_RETURN_BOOK = 4;
const int OPTION_DISPLAY_BOOKS = 5;
const int OPTION_EXIT = 6;

void save_books_to_file(const Library &library, const string &filename) {
    ofstream file(filename);

    if (file.is_open()) {
        for (const Book &book : library.get_books()) {
            file << book.get_title() << "," << book.get_author() << "," << book.get_isbn() << endl;
        }
        file.close();
    } else {
        cerr << "Could not open the file for writing." << endl;
    }
}

void load_books_from_file(Library &library, const string &filename) {
    ifstream file(filename);

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            istringstream ss(line);
            string title, author, isbn;
            getline(ss, title, ',');
            getline(ss, author, ',');
            getline(ss, isbn, ',');
            Book new_book(title, author, isbn);
            library.add_book(new_book);
        }
        file.close();
    } else {
        cerr << "Could not open the file for reading." << endl;
    }
}

void add_book(Library &library) {
    string title, author, isbn;

    cout << "Enter title: ";
    cin.ignore();
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
    cout << "Enter the number of the book to remove (0 to cancel): ";
    cin >> to_remove;

    if (to_remove > 0 && to_remove <= library.get_total_books()) {
        library.remove_book(to_remove);
        cout << "Book removed successfully." << endl;
    } else if (to_remove != 0) {
        cout << "Invalid book number. Please try again." << endl;
    }
}

void borrow_book(Library &library, User user) {
    library.display_available_books();

    int to_borrow;
    cout << "Enter the number of the book to borrow (0 to cancel): ";
    cin >> to_borrow;

    if (to_borrow > 0 && to_borrow <= library.get_total_books()) {
        library.borrow_book(to_borrow, user);
        cout << "Book borrowed successfully." << endl;
    } else if (to_borrow != 0) {
        cout << "Invalid book number. Please try again." << endl;
    }
}

void return_book(Library &library, User user) {
    library.display_borrowed_books(user);

    int to_return;
    cout << "Enter the number of the book to return (0 to cancel): ";
    cin >> to_return;

    if (to_return > 0 && to_return <= library.get_total_books()) {
        library.return_book(to_return);
        cout << "Book returned successfully." << endl;
    } else if (to_return != 0) {
        cout << "Invalid book number. Please try again." << endl;
    }
}

void display_availability(Library &library) {
    library.display_availability();
    cout << "Press any key to exit." << endl;
    cin.ignore();
    cin.get();
}

void show_main_menu(User user) {
    int option;
    Library library;

    while (option != OPTION_EXIT) {
        cout << "Welcome to the library!" << endl;
        cout << "Would you like to:" << endl;
        cout << OPTION_ADD_BOOK << ". Add a new book to the library" << endl;
        cout << OPTION_REMOVE_BOOK << ". Remove a book from the library" << endl;
        cout << OPTION_BORROW_BOOK << ". Borrow a book" << endl;
        cout << OPTION_RETURN_BOOK << ". Return a book" << endl;
        cout << OPTION_DISPLAY_BOOKS << ". Display details of available books and borrowed books" << endl;
        cout << OPTION_EXIT << ". Exit" << endl;
        cin >> option;

        switch (option) {
            case OPTION_ADD_BOOK:
                add_book(library);
                break;
            case OPTION_REMOVE_BOOK:
                remove_book(library);
                break;
            case OPTION_BORROW_BOOK:
                borrow_book(library, user);
                break;
            case OPTION_RETURN_BOOK:
                return_book(library, user);
                break;
            case OPTION_DISPLAY_BOOKS:
                display_availability(library);
                break;
            case OPTION_EXIT:
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}
