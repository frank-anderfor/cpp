/*
 * TASK #4
 * Write a program for password verification
 * which gives a user only a few chances for
 * input the correct password thanks to using
 * a password cracker would be more difficult.
 * 
 * DO-WHILE LOOP VERSION
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    string uLogin = "Sausage";
    string uPassword = "h4ck3r";
    string uInput;

    int i = 3;

    cout << "USER: " << uLogin;

    cin.ignore();

    do {

        cout << "PASSWORD: "; cin >> uInput;
        cout << endl;

        cin.ignore();

        if (uInput != uPassword) {
            cout << "PASSWORD INCORRECT" << endl;
            cin.ignore();
            cout << --i << " TRIES LEFT" << endl;
            cin.ignore();
            continue;
        } else {
            cout << "HELLO >>" << uLogin << "<<\nHOW ARE YOU?\n\n    (¬‿¬ )\n\n";
            cin.ignore();
            return 0; 
        }

    } while (i > 0);

    cout << "ACCESS DENIED\n\nGOOD BYE h4ck3r\n\n  ¯\\_(ツ)_/¯\n\n";
    cin.ignore();

    return 0;

}

/*
 * NOTES
 * Backslash '\' is a special character. There is a need to write it double to print one. -> "\\"
 * 
 * After changing for-loop version into while-loop, making a do-while-loop version was simply as fuck.
 * I just moved conditional to the end of the loop body, wrote 'do' at the beginning and did not need
 * to worry about the rest.
 */