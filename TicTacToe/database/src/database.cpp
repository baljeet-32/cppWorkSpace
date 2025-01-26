#include "database.hpp"

/*Constructor*/
Database::Database()
{
    users.clear();
}

/*Function to check if the username already exists*/
bool  Database::isUsernameExist(string username)
{
    for (auto user : this->users)
    {
        if (user.getUsername() == username)
            return true;
    }
    return false;
}

/*Function to check if the user exists*/
bool Database::isUserExist(string username, string password)
{
    for (auto user : this->users)
    {
        if (user.getUsername() == username && user.getPassword() == password)
            return true;
    }
    return false;
}

/*Function to add a new user*/
bool Database::addUser(User user)
{
    if (this->isUsernameExist(user.getUsername()))
        return false;
    this->users.push_back(user);
    return true;
}


User Database::getUser(string username)
{
    for (auto user : this->users)
    {
        if (user.getUsername() == username)
            return user;
    }
    return User();
}
