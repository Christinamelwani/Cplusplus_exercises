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