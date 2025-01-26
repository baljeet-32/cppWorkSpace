#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*Declaring variables*/
    int choice;
    string username;
    string password;

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
    switch (choice)
    {
    case 1:
        /*Code for existing user*/
        cout << "Enter your user-name: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;
        // Login(username, password);
        

        break;
    case 2:
        /*Code for new user*/
        // Register()
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