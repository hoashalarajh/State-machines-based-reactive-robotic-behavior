// Finite_State_Machines_Reactive_Robot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printMessage(int input) {
    switch (input) {
    case 1:
        cout << "Hello" << endl;
        break;
    case 2:
        cout << "What do you prefer to eat?" << endl;
        break;
    case 3:
        cout << "What do you prefer to drink?" << endl;
        break;
    case 4:
        cout << "Okay, goodbye!" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }
}

void enter_vector(int vector[4]) {
    //looping through the input vector
    for (int i = 0; i < 4; i++) {
        printMessage(vector[i]);
    }
}



int main()
{
    // entering the vector
    int vector[4] = {1,2,3,4};

    // calling the enter vector function to input the vector and print the message
    enter_vector(vector);


    return 0;
}
