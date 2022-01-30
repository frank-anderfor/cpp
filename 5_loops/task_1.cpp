/*
 * TASK #1
 * Write a program to print the full lyrics of '99 Bottles of Beer' song.
 * 
 * WHILE LOOP VERSION
 */

#include <iostream>

using namespace std;

int main() {

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

    return 0;

}

/*
 * NOTE
 * While version of this task is quite simple,
 * but decrementation is hidden in displaying text
 * what can make troubles for code review.
 * I decided to move to last lines out of the loop block
 * to avoid using conditionals.
 * I'm afraid this makes code less scalable,
 * but I don't have to worry about that in this task.
 */