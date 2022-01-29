/*
 * TASK #3
 * Implement a simple password verification system, which reads passwords in a digital way.
 * One of the two passwords should be valid, but to check them use a single if statement.
 */

#include <iostream>

using namespace std;

int main() {

    int password_1, password_2;

    cout << "Set the first password: "; cin >> password_1;
    cout << "Set the second password: "; cin >> password_2;

    if (password_1 == 1111 || password_2 == 2222) {
        cout << "Password is correct." << endl;
    } else {
        cout << "Incorrect password. Access deniad." << endl;
    }

    return 0;

}