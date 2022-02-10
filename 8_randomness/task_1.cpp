/*
 * TASK #1
 * Write a program to simulate coin toss. Run it many times.
 * Do the results look random in your opinion?
 */

/* HEADERS */
#include <iostream>
// for text justifying in GUI
#include <iomanip>
// for user input validation
#include <string>
// ctime nad cstdlib for randomness functionalities
#include <ctime>
#include <cstdlib>

/* NAMESPACES */
using namespace std;

/* GLOBALS */
int draws;
int heads;
int tails;

/* PROTOTYPES */
int randomRange(int minimum, int maximum);
int returnInt(string input);

void tossCoin(int drawNumber);
void showStats();

/* MAIN */
int main() {

    string userInput;

    draws = 0;
    heads = 0;
    tails = 0;

    srand( time( NULL ) );

    cout << "\nPROGRAM START\n";

    while (true) {

        system("clear");

        showStats();

        do {

            cout << " # OF COIN TOSS: ";

            cin >> userInput;            

        } while( returnInt(userInput) == -1 );

        if ( returnInt(userInput) == 0 ) break;

        tossCoin( returnInt(userInput) );

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

void tossCoin(int drawNumber) {

    int result;
    bool showResult;

    if (drawNumber == 1) {
        showResult = true;
    }

    for (int i=0; i<drawNumber; i++) {

        draws++;

        result = randomRange(0, 1);

        switch (result) {

            case 0:
                if (showResult) {
                    cout << "\nYou drew heads !\n";
                    cin.ignore(); cin.ignore();
                }
                heads++;
                break;
            case 1:
                if (showResult) {
                    cout << "\nYou drew tails !\n";
                    cin.ignore(); cin.ignore();
                }
                tails++;
                break;
            default:
                if (showResult) cout << "\nBad result !\n";
                cin.ignore(); cin.ignore();
                break;

        }

    }

}

void showStats() {

    double percDraws, percHeads, percTails;

    percDraws = (draws * 100.0) / draws;
    percHeads = (heads * 100.0) / draws;
    percTails = (tails * 100.0) / draws;

    cout << "                                        " << endl;
    cout << " TOSS A COIN SIMULATOR && STATS COUNTER " << endl;
    cout << "                                        " << endl;
    cout << "| # OF DRAWS | # OF HEADS | # OF TAILS |" << endl;
    cout << "|============|============|============|" << endl;
    cout << "|";
    cout << right << setw(11) << draws << " ";
    cout << "|";
    cout << right << setw(11) << heads << " ";
    cout << "|";
    cout << right << setw(11) << tails << " ";
    cout << "|";
    cout << endl;
    cout << "|============|============|============|" << endl;
    cout << "|";
    cout << right << setw(9) << percDraws << " % ";
    cout << "|";
    cout << right << setw(9) << percHeads << " % ";
    cout << "|";
    cout << right << setw(9) << percTails << " % ";
    cout << "|";
    cout << endl;
    cout << "                                        " << endl;

}

/*
 * NOTES
 * I was thinking about how to put nicely numbers growing in time into fixed display space
 * I found out iomanip library - If it works it is great!
 * 
 * Sorry about using arrays too soon, but others methods of checking if string is a number
 * needed pointers too work so that's not a biggest sin I could make
 *
 * Source:
 * https://www.codegrepper.com/code-examples/cpp/c%2B%2B+check+if+string+is+a+number
 */