#if !defined(USER_H)
#define USER_H
#include <bits/stdc++.h>
using namespace std;
class User
{
    private:
        /*fields*/
        string name;
        string username;
        string password;
    
    public:
        /*methods*/
        User();
        User(string name, string username, string password);
        string getUsername();
        string getPassword();

};

#endif // USER_H


