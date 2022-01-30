/*
 * TASK #3
 * Write a program to calculate cumulative sum of numbers given from user
 * which finish running after user input 0. 
 * 
 * FOR LOOP VERSION
 */

#include <iostream>

using namespace std;

int main() {

    double sum = 0;

    for (double uInput = 1; uInput != 0; ) {
        cout << "Enter a number: "; cin >> uInput;
        sum += uInput;
    }

    cout << "Sum of your numbers: " << sum << endl;

    return 0;

}

/*
 * NOTE
 * There was no need to make a big modification to run this task
 * using a for loop, but I think this kind of structure is not
 * designed for that.
 * It is working good but looking tricky and strange in my opinion.
 */