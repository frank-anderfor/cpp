/*
 * TASK #2
 * Write a program that provides a menu, which allows user to make a choice from different options.
 * If user's choice is not compatible with any option, display menu again.
 * 
 * INFINITE FOR LOOP VERSION
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    char choice;

    for(;;) {

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
 * I did not decided to modify anything of the engine of this code.
 * Just changed infinite while loop with infite for loop (empty for header).
 * It is working in the same way, but it can be a little more confusing,
 * for not experienced programmer.
 * I remember when a few years later my friend showed me this tricky way
 * of infinite loop and I did not know what was happening.
 * I think it is not the best to write an infinite loop, because there is a need
 * of know how the for loop works when it is empty.
 * It is not obvious and less readable.
 */