#include <string>
using namespace std;
class User{
    public:
    string username;

    private:
    string email;
    string password;

    public:
    User(string e, string u, string p)
    : email(e), username(u), password(p){}

    bool invalid(){
        return email == "Invalid";
    }
};