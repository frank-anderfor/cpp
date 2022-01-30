/*
 * TASK #1
 * Write a program to print the full lyrics of '99 Bottles of Beer' song.
 * 
 * DO-WHILE LOOP VERSION
 */

#include <iostream>

using namespace std;

int main() {

    int bottle_number = 99;

    do {
        cout << bottle_number << " bottles of beer on the wall, "
             << bottle_number << " bottles of beer. "
             << "Take one down and pass it around - "
             << --bottle_number << " bottles of beer on the wall." << endl;
        
        cin.ignore();
    } while (bottle_number > 1);

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

    return 0;

}

/*
 * NOTE
 * I just changed place of while conditional
 * and added do on the beggining of the loop.
 * In this task while and do-while work very similar.
 * Thanks to predecrementation there is no problem
 * with exiting do-while in a proper time.
 */