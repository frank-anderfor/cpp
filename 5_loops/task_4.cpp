/*
 * TASK #4
 * Write a program for password verification
 * which gives a user only a few chances for
 * input the correct password thanks to using
 * a password cracker would be more difficult.
 * 
 * FOR LOOP VERSION
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    string uLogin = "Sausage";
    string uPassword = "h4ck3r";
    string uInput;

    cout << "USER: " << uLogin;

    cin.ignore();

    for (int i = 3; i > 0; i--) {

        cout << "PASSWORD: "; cin >> uInput;
        cout << endl;

        cin.ignore();

        if (uInput != uPassword) {
            cout << "PASSWORD INCORRECT" << endl;
            cin.ignore();
            cout << i - 1 << " TRIES LEFT" << endl;
            cin.ignore();
            continue;
        } else {
            cout << "HELLO >>" << uLogin << "<<\nHOW ARE YOU?\n\n    (¬‿¬ )\n\n";
            cin.ignore();
            return 0; 
        }

    }

    cout << "ACCESS DENIED\n\nGOOD BYE h4ck3r\n\n  ¯\\_(ツ)_/¯\n\n";
    cin.ignore();

    return 0;

}

/*
 * NOTES
 * Backslash '\' is a special character. There is a need to write it double to print one. -> "\\"
 * 
 * For loop is good for this task as I can keep all control instruction in one line.
 * It is very readable and easy to modify without looking for variables inside of loop body.
 */