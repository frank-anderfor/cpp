/*
 * TASK #2
 * Write a program that provides a menu, which allows user to make a choice from different options.
 * If user's choice is not compatible with any option, display menu again.
 * 
 * INFINITE WHILE LOOP VERSION
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    char choice;

    while (true) {

        cout << "MENU:\n" <<
                "~ press 'q' to quit\n" << 
                "~ press 'n' to enter name\n" <<
                "~ press 'c' to calculate\n" <<
                "~ press 'v' to see the result\n\n"
                "YOUR CHOICE: "; cin >> choice;
        cout << endl;

        if (choice == 'q') {
            break;
        } else if (choice == 'n') {
            string uName;
            cout << "Enter your name: "; cin >> uName;
            cout << "Hello, " << uName << " !" << endl;
        } else if (choice == 'c') {
            double uNum1, uNum2;
            cout << "Enter #1 number: "; cin >> uNum1;
            cout << "Enter #2 number: "; cin >> uNum2;
            cout << uNum1 << " + " << uNum2 << " = " << uNum1 + uNum2 << endl;
            cin.ignore();
        } else if (choice == 'v') {
            int iterator;
            cout << "Gimme some numbero: "; cin >> iterator;
            cin.ignore();
            cout << "Wanna see result? ( ͡° ͜ʖ ͡°)" << endl;
            cin.ignore();
            while (iterator > 0) {
                cout << "Wait for that . . .\n"; cin.ignore();
                --iterator;
            } cout << "What a surprising result!" << endl;
        } else {
            continue;
        }

        cout << endl;
    }

    return 0;

}

/*
 * NOTE
 * Using infinite while loop was the first thing I had in my mind
 * while solving this task. 
 * Infinite loop is a riskful tool, but after adding quit instruction
 * there is no fear to make it real.
 * There is only one line outside of loop body what is good for scalability.
 */