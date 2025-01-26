#include<bits/stdc++.h>
#include "database.hpp"
#include "user.hpp"
using namespace std;

int main()
{
    /*Declaring variables*/
    int choice;
    string username;
    string name;
    string password;
    Database db;

    /*Displaying the welcome message*/
    cout << "|----------------------------------------------------------|" << endl;
    cout << "|                                                          |" << endl;
    cout << "|              Welcome to Tic Tac Toe World                |" << endl;
    cout << "|                                                          |" << endl;
    cout << "|----------------------------------------------------------|" << endl;

    /*Displaying the menu*/
    cout << "Press 1 : Existing user" << endl;
    cout << "Press 2 : New user" << endl;
    cout << "Press 3 : Exit" << endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        /*Code for existing user*/
        cout << "Enter your user-name: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;
        while(!db.isUserExist(username, password))
        {
            cout << "Invalid credentials. Please try again." << endl;
            cout << "Enter your user-name: ";
            cin >> username;
            cout << "Enter your password: ";
            cin >> password;
        }
        cout << "Login successful!" << endl;

        

        break;
    case 2:
        /*Code for new user*/
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your user-name: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;
        if(db.addUser(User(name, username, password)))
            cout << "User added successfully!" << endl;
        else
            cout << "User already exists!" << endl;
        break;
        

    case 3:
        /*Code for exit*/
        break;
    default:
        break;
    }

    /*Indicating succeful completion of program*/
    return 0;

}