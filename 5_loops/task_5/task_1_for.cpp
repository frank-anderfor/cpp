/*
 * TASK #1
 * Write a program to print the full lyrics of '99 Bottles of Beer' song.
 * 
 * FOR LOOP VERSION
 */

#include <iostream>

using namespace std;

int main() {

    for (int bottle_number = 99; bottle_number >= 0; bottle_number--) {

        if (bottle_number == 1) {

            cout << bottle_number << " bottle of beer on the wall, "
                 << bottle_number << " bottle of beer. "
                 << "Take one down and pass it around - "
                 << " no more bottles of beer on the wall." << endl;

            cin.ignore();

        } else if (bottle_number == 0) {

            cout << "No more bottls of beer on the wall, "
                 << "no more bottles of beer. "
                 << "Go to the store and buy some more, "
                 << "99 bottles of beer on the wall." << endl;

            cin.ignore();

        } else {

            cout << bottle_number << " bottles of beer on the wall, "
                 << bottle_number << " bottles of beer. "
                 << "Take one down and pass it around - "
                 << bottle_number - 1 << " bottles of beer on the wall." << endl;
            
            cin.ignore();

        }

    }    

    return 0;

}

/*
 * NOTE
 * For loop works good for this task.
 * I had to make 3 level conditional check to print whole correctly
 * instead of no conditional in while-loop version,
 * but I think it is better readable and whole program is closed
 * in one block of loop code.
 */