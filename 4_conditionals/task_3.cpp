/*
 * TASK #3
 * Write a simple calculator program to read from input one of the arithmetic operators
 * and two arguments, and then display the calculation result to the screen.
 */

#include <iostream>

using namespace std;

int main() {

    double argument_1, argument_2;
    char action;

    cout << "Argument #1: "; cin >> argument_1;
    cout << "Argument #2: "; cin >> argument_2;
    cout << "Action: "; cin >> action;

    if (action == '*') {
        cout << "Product: " << argument_1 * argument_2;
    } else if (action == '/') {
        cout << "Quotient: " << argument_1 / argument_2;
    } else if (action == '+') {
        cout << "Sum: " << argument_1 + argument_2;
    } else if (action == '-') {
        cout << "Difference: " << argument_1 - argument_2;
    } else {
        cout << "Unknown action.";
    }

    cout << endl;

}

/*
 * NOTES:
 * There is no % operator for double type numbers in C++
 */