/*
 * TASK #3
 * Write a tic-tac-toe game where two people play against each other.
 * If it is possible use an enumerated type to store board field values.
 */

/* HEADERS */
#include <iostream>

/* NAMESPACES */
using namespace std;

/* GLOBAL VARIABLES */
enum fieldValue {TTT_EMPTY = 0,
                 TTT_CIRCLE = 1,
                 TTT_CROSS = 2};

fieldValue topLeft = TTT_EMPTY;
fieldValue topCenter = TTT_EMPTY;
fieldValue topRight = TTT_EMPTY;

fieldValue centerLeft = TTT_EMPTY;
fieldValue centerCenter = TTT_EMPTY;
fieldValue centerRight = TTT_EMPTY;

fieldValue bottomLeft = TTT_EMPTY;
fieldValue bottomCenter = TTT_EMPTY;
fieldValue bottomRight = TTT_EMPTY;

// false - Cross Move
// true - Circle Move
bool playerSwitch = false;

/* PROTOTYPES */
int checkWin();

/* MAIN FUNCTION BODY */
int main() {

    int input = 0;

    while (true) {

        if (playerSwitch) {
            cout << "Circle move" << endl;
        } else {
            cout << "Cross move" << endl;
        }

        cout << "Gimme some data: "; cin >> input;

        if (playerSwitch) {
            playerSwitch = false;      
        } else {
            playerSwitch = true;
        }

        cout << "Winner STATUS: " << checkWin() << endl;

    }

    return 0;

}

int checkWin() {

    // horizontal Win
    bool topHorWin = (topLeft == topCenter) && (topLeft == topRight) && (topLeft != TTT_EMPTY);
    bool cenHorWin = (centerLeft == centerCenter) && (centerLeft == centerRight) && (centerLeft != TTT_EMPTY);
    bool botHorWin = (bottomLeft == bottomCenter) && (bottomLeft == bottomRight) && (bottomLeft != TTT_EMPTY);

    // vertical Win
    bool lftVerWin = (topLeft == centerLeft) && (topLeft == bottomLeft) && (topLeft != TTT_EMPTY);
    bool cenVerWin = (topCenter == centerCenter) && (topCenter == bottomCenter) && (topCenter != TTT_EMPTY);
    bool rgtVerWin = (topRight == centerRight) && (topRight == bottomRight) && (topRight != TTT_EMPTY);

    // diagonal Win
    bool lftDiaWin = (topLeft == centerCenter) && (topLeft == bottomRight) && (topLeft != TTT_EMPTY);
    bool rgtDiaWin = (bottomLeft == centerCenter) && (bottomLeft == topRight) && (bottomLeft != TTT_EMPTY);

    if (topHorWin || cenHorWin || botHorWin ||
        lftVerWin || cenVerWin || rgtVerWin ||
        lftDiaWin || rgtDiaWin)
    {
        cout << "We have a WINNER!" << endl;
        return 1;
    }
    else
    {
        cout << "No winner yet. . ." << endl;
        return 0;
    }

}