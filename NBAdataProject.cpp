// NBAdataProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    //constant for menu choices
    const int CAP_CHOICE = 1,
              EXIT_CHOICE = 2;

    //Variables
    int choice;


    do
    {
        cout << "Welcome to the NBA Database Bank \n\n"
            << "1. Create a Player \n"
            << "2. Exit the Program \n\n"
            << "Please Enter your choice: ";
        cin >> choice;

        //Vladiating the menu choice
        while (choice < CAP_CHOICE || choice > EXIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        //process the choice now


    } while (choice != EXIT_CHOICE);






    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
