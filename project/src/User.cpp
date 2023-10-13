#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

const string dataFilePath = "/Users/christinamelwani/Desktop/Binus Online Learning/cpp/project/data/users.csv";

struct UserData {
    string email;
    string username;
    string password;
};

bool parseCSVLine(const string& line, UserData& userData) {
    istringstream ss(line);
    if (getline(ss, userData.email, ',') &&
        getline(ss, userData.username, ',') &&
        getline(ss, userData.password)) {
        return true;
    }
    return false;
}

bool openDataFile(fstream& file, const string& filePath, ios_base::openmode mode) {
    file.open(filePath, mode);
    if (!file.is_open()) {
        cerr << "Could not open the file: " << filePath << endl;
        return false;
    }
    return true;
}

User register_user() {
    string email, username, password;

    cout << "Enter your email: ";
    cin.ignore();
    getline(cin, email);

    cout << "Enter your username: ";
    getline(cin, username);

    cout << "Enter your password: ";
    getline(cin, password);

    User newUser(email, username, password);

    fstream file;
    if (!openDataFile(file, dataFilePath, ios::out | ios::app)) {
        return User("Invalid", "Invalid", "Invalid");
    }

    file << email << "," << username << "," << password << endl;

    return newUser;
}

User login_user(const string& email) {
    fstream file;
    if (!openDataFile(file, dataFilePath, ios::in)) {
        return User("Invalid", "Invalid", "Invalid");
    }

    UserData userData;
    string line;

    while (getline(file, line)) {
        if (parseCSVLine(line, userData) && userData.email == email) {
            string input_password;
            cout << "Hi " << userData.username << "! Enter your password: ";
            getline(cin, input_password);

            while (input_password != userData.password) {
                cout << "Invalid password! Try again." << endl;
                cout << "Enter your password: ";
                getline(cin, input_password);
            }

            return User(userData.email, userData.username, userData.password);
        }
    }

    cout << "User not found! Register first!" << endl;
    return register_user();
}

User get_user() {
    int option = 0;

    while (option != 3) {
        cout << "Please log in or register to use the library:" << endl;
        cout << "1. Log in" << endl;
        cout << "2. Register" << endl;
        cout << "3. Exit" << endl;

        cin >> option;

        if (option == 1) {
            string email;
            cout << "Enter your email: ";
            cin.ignore();
            getline(cin, email);
            return login_user(email);
        }

        if (option == 2) {
            return register_user();
        }
    }
}
