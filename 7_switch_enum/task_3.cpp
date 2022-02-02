/*
 * TASK #3
 * Write a tic-tac-toe game where two people play against each other.
 * If it is possible use an enumerated type to store board field values.
 */

/* HEADERS */
#include <iostream>
#include <string>

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
int checkInput(string index);

bool checkWin();
bool checkGameOver();
bool checkField(int index);

void playerMove(bool flague);

/* MAIN FUNCTION BODY */
int main() {

    system("clear");
    cout << "PROGRAM START\n\n";

    do {

        playerMove(playerSwitch);

    } while (!checkWin() && !checkGameOver());

    cin.ignore();

    cout << "\nPROGRAM END" << endl;

    return 0;

}

bool checkWin() {

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

    // winner found - true
    if (topHorWin || cenHorWin || botHorWin ||
        lftVerWin || cenVerWin || rgtVerWin ||
        lftDiaWin || rgtDiaWin)
    {
        cout << "\nWe have a WINNER!\n\n";
        return true;
    }
    // no winning combinations on the gameboard yet = false
    else
    {
        cout << "\nNo winner yet. . .\n\n";
        return false;
    }

}

bool checkGameOver() {

    // no empty fields on the board and no winning combination
    if (topLeft      != TTT_EMPTY &&
        topCenter    != TTT_EMPTY &&
        topRight     != TTT_EMPTY &&
        centerLeft   != TTT_EMPTY &&
        centerCenter != TTT_EMPTY &&
        centerRight  != TTT_EMPTY &&
        bottomLeft   != TTT_EMPTY &&
        bottomCenter != TTT_EMPTY &&
        bottomRight  != TTT_EMPTY &&
        checkWin()   == false)
    {
        cout << "\nDRAW!\n";
        return true;
    }
    // there are still empty fields on the board
    else
    {
        cout << "Still playing. . ." << endl;
        return false;
    }

}

int checkInput(string index) {

    int fieldIndex;

    if (index == "1" || index == "2" || index == "3" ||
        index == "4" || index == "5" || index == "6" ||
        index == "7" || index == "8" || index == "9")
    {
        fieldIndex = stoi(index);
    }
    else
    {
        fieldIndex = 0;
    }

    return fieldIndex;

}

bool checkField(int index) {

    fieldValue fieldPlaceholder;

    switch (index) {
        // top row
        case 7:
            fieldPlaceholder = topLeft;
            break;
        case 8:
            fieldPlaceholder = topCenter;
            break;
        case 9:
            fieldPlaceholder = topRight;
            break;
        // center row
        case 4:
            fieldPlaceholder = centerLeft;
            break;
        case 5:
            fieldPlaceholder = centerCenter;
            break;
        case 6:
            fieldPlaceholder = centerRight;
            break;
        // bottom row
        case 1:
            fieldPlaceholder = bottomLeft;
            break;
        case 2:
            fieldPlaceholder = bottomCenter;
            break;
        case 3:
            fieldPlaceholder = bottomRight;
            break;
        // default for fun
        default:
            cout << "Switched to default. . ." << endl;
            cin.ignore();
            break;                                                                                                                                                                                                                        
    }

    if (fieldPlaceholder != TTT_EMPTY) {
        return true;
    } else {
        return false;
    }

}

void playerMove(bool flague) {

    string playerInput;
    string playerSide;
    fieldValue playerSymbol;
    int fieldIndex;

    // Circle
    if (flague) {
        playerSide = "Circle";
        playerSymbol = TTT_CIRCLE;
    }
    // Cross
    else {
        playerSide = "Cross";
        playerSymbol = TTT_CROSS;
    }

    cout << playerSide << " is moving now. . .\n\n";

    while (true) {

        cout << "Enter the field # [1-9]: "; cin >> playerInput;

        fieldIndex = checkInput(playerInput);

        // user input is different than allowed 1-9 numbers
        if (fieldIndex == 0) 
        {
            cout << "\nIncorrect field # !\n";
            cin.ignore();
            continue;
        } 
        // user input is correct
        else 
        {
            // checkField == true -> field is not empty
            if (checkField(fieldIndex)) 
            {
                cout << "\nChoosen field is not empty!\n" << endl;
                cin.ignore();
                continue;
            }
            // check is empty - drawing new symbol inside 
            else
            {
                switch (fieldIndex) {
                    // top row
                    case 7:
                        topLeft = playerSymbol;
                        break;
                    case 8:
                        topCenter = playerSymbol;
                        break;
                    case 9:
                        topRight = playerSymbol;
                        break;
                    // center row
                    case 4:
                        centerLeft = playerSymbol;
                        break;
                    case 5:
                        centerCenter = playerSymbol;
                        break;
                    case 6:
                        centerRight = playerSymbol;
                        break;
                    // bottom row
                    case 1:
                        bottomLeft = playerSymbol;
                        break;
                    case 2:
                        bottomCenter = playerSymbol;
                        break;
                    case 3:
                        bottomRight = playerSymbol;
                        break;
                    // default for fun
                    default:
                        cout << "Switched to default. . ." << endl;
                        cin.ignore();
                        break;                                                                                                                                                                                                                        
                }
                break;
            }
        }

    }
    // checking and eventually changing global flague status
    if (flague == playerSwitch) {

        playerSwitch = !playerSwitch;

    } else {

        cout << "\nFlague difference detected!\n" << endl;

    }

}