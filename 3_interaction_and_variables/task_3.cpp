/*
 * TASK #3
 * Write a program to perform division of two numbers
 * given from a user and display an exact result to the screen.
 * Don't forget to test your program for both integers and floating point numbers.
 */

#include <iostream>

using namespace std;

int main() {
    
    double a, b;
    
    cout << "Enter the first number: "; cin >> a;
    cout << "Enter the second number: "; cin >> b;
    cout << "The quotient of entered numbers is: " << a / b << endl;

    return 0;
    
}