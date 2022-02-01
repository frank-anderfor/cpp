/*
 * TASK #1
 * Take the menu program you wrote earliera and break it into series of function call
 * where each of them is responsible for one menu position.
 * As two new items in the menu add calculator and 99 Bottles of Beer. 
 */


/* HEADERS */
#include <iostream>
#include <string>

/* NAMESPACES */
using namespace std;

/* PROTOTYPES */
void enterName();
void calcuLate();
void seeResult();
void singAsong();

void runMenu();

/* MAIN FUNCTION BODY */
int main() {

    system("clear");

    cout << "PROGRAM START\n\n";

    runMenu();

    cin.ignore();

    cout << "\nPROGRAM END";

    cin.ignore();

    system("clear");

    return 0;

}

/* FUNCTION BODIES */

// enterName() BODY
void enterName() {

    string uName;

    cout << "Enter your name: "; cin >> uName;
    cout << "Hello, " << uName << " !" << endl;
}

// calcuLate() BODY
void calcuLate() {

    double argument_1, argument_2;
    string action;

    cout << "Argument #1: "; cin >> argument_1;
    cout << "Argument #2: "; cin >> argument_2;
    cout << "Action: "; cin >> action;

    if (action == "*") {
        cout << "Product: " << argument_1 * argument_2;
    } else if (action == "/") {
        cout << "Quotient: " << argument_1 / argument_2;
    } else if (action == "+") {
        cout << "Sum: " << argument_1 + argument_2;
    } else if (action == "-") {
        cout << "Difference: " << argument_1 - argument_2;
    } else {
        cout << "Unknown action.";
    }

    cout << endl;  
}

// seeResult() BODY
void seeResult() {

    int iterator;

    cout << "Gimme some numbero: "; cin >> iterator;
    cin.ignore();
    cout << "Wanna see result? ( ͡° ͜ʖ ͡°)" << endl;
    cin.ignore();

    while (iterator > 0) {

        cout << "Wait for that . . .\n";
        cin.ignore();
        --iterator;

    } 
    
    cout << "What a surprising result!" << endl;
}

// singAsong() BODY
void singAsong() {

    int bottle_number = 99;

    while (bottle_number > 1) {
        cout << bottle_number << " bottles of beer on the wall, "
             << bottle_number << " bottles of beer. "
             << "Take one down and pass it around - "
             << --bottle_number << " bottles of beer on the wall." << endl;
        
        cin.ignore();
    }

    cout << bottle_number << " bottle of beer on the wall, "
         << bottle_number << " bottle of beer. "
         << "Take one down and pass it around - "
         << " no more bottles of beer on the wall." << endl;

    cin.ignore();    

    cout << "No more bottls of beer on the wall, "
         << "no more bottles of beer. "
         << "Go to the store and buy some more, "
         << "99 bottles of beer on the wall." << endl;

    cin.ignore();      

}

// runMenu() BODY
void runMenu() {

    string choice;

    while (true) {

        cout << "MENU:\n" <<
                "~ press 'q' to quit\n" << 
                "~ press 'n' to enter name\n" <<
                "~ press 'c' to calculate\n" <<
                "~ press 'v' to see the result\n"
                "~ press '99' to see the sing a song\n\n"
                "YOUR CHOICE: "; cin >> choice;
        cout << endl;

        if (choice == "q") {

            cout << "Good bye cruel world. . ." << endl;
            break;

        } else if (choice == "n") {

            enterName();

        } else if (choice == "c") {

            calcuLate();

        } else if (choice == "v") {

            seeResult();

        } else if (choice == "99") {

            singAsong();

        } else {

            continue;

        }

        cin.ignore();

        cout << endl;
    } 

}