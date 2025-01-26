#if !defined(DATABASE_H)
#define DATABASE_H
#include "user.hpp"
#include <bits/stdc++.h>
using namespace std;
class Database
{
    private:
        vector<User> users;
    public:
        Database();
        bool addUser(User user);
        User getUser(string username);
        bool isUserExist(string username, string password);
        bool isUsernameExist(string username);
};

#endif // DATABASE_H
