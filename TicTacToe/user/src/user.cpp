#include "user.hpp"

User::User()
{
    this->username = "";
    this->password = "";
}

User::User(string name, string username, string password)
{
    this->name = name;
    this->username = username;
    this->password = password;
}
string User::getUsername()
{
    return this->username;
}

string User::getPassword()
{
    return this->password;
}