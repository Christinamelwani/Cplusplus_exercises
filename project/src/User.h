#include <string>
using namespace std;
class User{
    private:
    string email;
    string username;
    string password;

    public:
    User(string e, string u, string p)
    : email(e), username(u), password(p){}

    bool invalid(){
        return email == "Invalid";
    }
};