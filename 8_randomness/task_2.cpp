/*
 * TASK #2
 * Write a program which choose a number from 1 to 100
 * and then allows the user to guess it.
 * A program should prompt if a number guessed by user
 * is too low, too high or correct.
 */

/* HEADERS */
#include <iostream>
// for user input validation
#include <string>

/* NAMESPACES */
using namespace std;

/* PROTOTYPES */
int randomRange(int minimum, int maximum);
int returnInt(string input);

int checkGuess(int guess, int correct);

/* GLOBALS */
int minimum = 1;
int maximum = 100;

/* MAIN */
int main() {

    int randomNumber = randomRange(minimum, maximum);

    string userInput;

    system("clear");

    cout << "\nPROGRAM START\n";

    cin.ignore(); cin.ignore();

    system("clear");

    cout << "I hava a number in my RAM.\nCan you guess it ?\n";

    cin.ignore();

    while (true) {

        do {

            cout << "GUESS A NUMBER: ";

            cin >> userInput;

        } while (returnInt(userInput) == -1);

        switch ( checkGuess( returnInt(userInput), randomNumber) ) {

            case 0:
                continue;
                break;
            case 1:
                break;
            default:
                break;

        }

        break;
    
    }

    cout << "\nPROGRAM END\n";

    cin.ignore(); cin.ignore();

    system("clear");

    return 0;

}

/* FUNCTIONS */
int randomRange(int minimum, int maximum) {

    return rand() % ( maximum - minimum + 1) + minimum;

}

int returnInt(string input) {

    for (int i=0; i<input.length(); i++) {

        if ( input[i] < '0' || input[i] > '9' ) {

            cout << "\nYOUR INPUT IS NOT A NUMBER !\n\n";

            return -1;

        }

        //Beleive in Allah!
        //just a slogan of the author of above int-str checker

    }

    return stoi(input);

}

int checkGuess(int guess, int correct) {

    if (guess == correct) {

        cout << "\nCONGRATULATIONS! YOUR GUESS IS RIGHT.\n\n";

        return 1;

    } else if (guess < correct) {

        cout << "\nYOUR GUESS IS TOO LOW.\n\n";

        return 0;

    } else if (guess > correct) {

        cout << "\nYOUR GUESS IS TOO HIGH.\n\n";

        return 0;

    } else {

        cout << "\nSORRY, SOMETHING WENT WRONG.\n\n";

        return -1;

    }

}

/*
 * NOTES:
 * Sorry about using arrays too soon, but others methods of checking if string is a number
 * needed pointers too work so that's not a biggest sin I could make
 *
 * Source:
 * https://www.codegrepper.com/code-examples/cpp/c%2B%2B+check+if+string+is+a+number
 *
 * It's a small problem with a metod I used to use to check if an input is a number
 * negative number are treated like NaN beacuse of '-' before the number
 */
