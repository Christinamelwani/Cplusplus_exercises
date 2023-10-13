#include "User.cpp"
#include "Book.cpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

enum MenuOption {
    OPTION_ADD_BOOK = 1,
    OPTION_REMOVE_BOOK = 2,
    OPTION_BORROW_BOOK = 3,
    OPTION_RETURN_BOOK = 4,
    OPTION_DISPLAY_BOOKS = 5,
    OPTION_EXIT = 6
};

const string BOOKS_FILE_PATH = "/Users/christinamelwani/Desktop/Binus Online Learning/cpp/project/data/books.csv";

void save_books_to_file(const Library &library, const string &filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Could not open the file for writing." << endl;
        return;
    }

    for (const Book &book : library.get_books()) {
        file << book.get_title() << "," << book.get_author() << "," << book.get_isbn() << ","
             << (book.is_available() ? "available" : "borrowed") << "," << book.borrower_username << endl;
    }
    file.close();
}

void load_books_from_file(Library &library, const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Could not open the file for reading." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        istringstream ss(line);
        string title, author, isbn, available, user;
        getline(ss, title, ',');
        getline(ss, author, ',');
        getline(ss, isbn, ',');
        getline(ss, available, ',');
        getline(ss, user, ',');
        Book new_book(title, author, isbn, available, user);
        library.add_book(new_book);
    }
    file.close();
}

int get_user_option() {
    int option;
    cout << "Enter your choice: ";
    cin >> option;
    return option;
}


void show_main_menu(User user) {
    int option;
    Library library;

    load_books_from_file(library, BOOKS_FILE_PATH);

    while (true) {
        cout << endl;
        cout << "Welcome to the library!" << endl;
        cout << "Would you like to:" << endl;
        cout << OPTION_ADD_BOOK << ". Add a new book to the library" << endl;
        cout << OPTION_REMOVE_BOOK << ". Remove a book from the library" << endl;
        cout << OPTION_BORROW_BOOK << ". Borrow a book" << endl;
        cout << OPTION_RETURN_BOOK << ". Return a book" << endl;
        cout << OPTION_DISPLAY_BOOKS << ". Display details of available books and borrowed books" << endl;
        cout << OPTION_EXIT << ". Exit" << endl;
        
        option = get_user_option();

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
                save_books_to_file(library, BOOKS_FILE_PATH);
                return;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}