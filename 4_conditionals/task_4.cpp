/*
 * TASK #4
 * Extend the password controlling program given in this chapter
 * to accept many users where everyone of them has own password.
 * Guarantee that proper password is assigned to proper user.
 * Provide the ability to log in again for user, if the first try is failure.
 * Consider how it would be easy (or hard) to realize such a functionality
 * in the case of large number of users and passwords.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    string user, password;

    cout << "Enter user login: "; cin >> user;
    cout << "Enter password for < " + user + " > : "; cin >> password;

    if (user == "Sausage") {
        if (password == "1010") {
            cout << "Password correct. Access granted." << endl;
        } else {
            cout << "Password incorrect. Please try again..." << endl;
            cout << "Enter password for < " + user + " > : "; cin >> password;
            if (password == "1010") {
                cout << "Password correct. Access granted." << endl;
            } else {
                cout << "Password incorrect. Access denied" << endl;
            }
        }
    } else if (user == "Potato") {
        if (password == "1101") {
            cout << "Password correct. Access granted." << endl;
            cout << "Enter password for < " + user + " > : "; cin >> password;
        } else {
            cout << "Password incorrect. Please try again..." << endl;
            if (password == "1101") {
                cout << "Password correct. Access granted." << endl;
            } else {
                cout << "Password incorrect. Access denied" << endl;
            }
        }
    } else if (user == "Moustache") {
        if (password == "1011") {
            cout << "Password correct. Access granted." << endl;
            cout << "Enter password for < " + user + " > : "; cin >> password;
        } else {
            cout << "Password incorrect. Please try again..." << endl;
            if (password == "1011") {
                cout << "Password correct. Access granted." << endl;
            } else {
                cout << "Password incorrect. Access denied" << endl;
            }
        }
    } else {
        cout << "Sorry. Unknown user." << endl;
    }

    return 0;

}

/*
 * NOTES:
 * Even if it is not a spaghetti code it is broken DRY rule.
 * In the case of software security, code should not contain user's data
 * such as login and password in the plain way.
 * More users means more lines of code doing the same trick.
 * It is a good place for a separate function and a loop.
 */