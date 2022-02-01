/*
 * TASK #2
 * Write a program to display Carol's 'The Twelve Days of Christmas' lyrics
 * using switch-case instruction.
 * (HINT: you can use and advantage of running through case blocks)
 */

#include <iostream>
#include <string>

using namespace std;

string getNumeral(int index);
string getA(int index);

int main() {

    for (int i = 1; i <= 12; i++) {

        cout << "On the " << getNumeral(i) << " day of Christmas" << endl;
        cout << "My true love sent to me" << endl;

        switch (i) {
            case 12:
                cout << "12 drummers drumming" << endl;
            case 11:
                cout << "Eleven pipers piping" << endl;
            case 10:
                cout << "Ten lords a-leaping" << endl;
            case 9:
                cout << "Nine ladies dancing" << endl;
            case 8:
                cout << "Eight maids a milking" << endl;
            case 7:
                cout << "Seven swans a swimming" << endl;
            case 6:
                cout << "Six geese a laying" << endl;
            case 5:
                cout << "Five golden rings (five golden rings)" << endl;
            case 4:
                cout << "Four calling birds" << endl;
            case 3:
                cout << "Three French hens" << endl;
            case 2:
                cout << "Two turtle-doves" << endl << "And a";
            case 1:
                cout << getA(i) << "partridge in a pear tree" << endl;
            default:
                break;
        }

        cout << endl;

    }

    return 0;

}

string getNumeral(int index) {

    switch (index) {
        case 1:
            return to_string(index) + "st";
        case 2:
            return to_string(index) + "nd";
        case 3:
            return to_string(index) + "rd";
        default:
            return to_string(index) + "th";
    }

}

string getA(int index) {

    if (index == 1) {
        return "A ";
    } else {
        return " ";
    }

}

/*
 * NOTES
 * Cannot concatenate integer and string without explicit conversion
 */