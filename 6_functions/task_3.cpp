/*
 * TASK #3
 * Modify password verification program in the way that all password verification logic
 * find a place in a separate function.
 */

#include <iostream>
#include <string>

using namespace std;

void checkPassword(string login, string password);

int main() {

    string uLogin = "Sausage";
    string uPassword = "h4ck3r";

    cout << "USER: " << uLogin;

    cin.ignore();

    checkPassword(uLogin, uPassword);

    return 0;

}

void checkPassword(string login, string password) {

    string uInput;

    for (int i = 3; i > 0; i--) {

        cout << "PASSWORD: "; cin >> uInput;
        cout << endl;

        cin.ignore();

        if (uInput != password) {
            cout << "PASSWORD INCORRECT" << endl;
            cin.ignore();
            cout << i - 1 << " TRIES LEFT" << endl;
            cin.ignore();
            continue;
        } else {
            cout << "HELLO >>" << login << "<<\nHOW ARE YOU TODAY ?\n\n    (¬‿¬ )\n\n";
            cin.ignore();
            return; 
        }

    }

    cout << "ACCESS DENIED\n\nGOOD BYE h4ck3r\n\n  ¯\\_(ツ)_/¯\n\n";
    cin.ignore();

}