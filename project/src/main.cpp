#include <iostream>
#include "User.h"
#include "Library.h"
#include "Library.cpp"

using namespace std;

int main(){
    User myUser = get_user();

    if(myUser.invalid()){
        cout <<"Failed to log in";
    } else {
        show_main_menu(myUser);
    }
    return 0;
}