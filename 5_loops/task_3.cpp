/*
 * TASK #3
 * Write a program to calculate cumulative sum of numbers given from user
 * which finish running after user input 0. 
 * 
 * DO-WHILE LOOP VERSION
 */

#include <iostream>

using namespace std;

int main() {

    double uInput, sum;

    sum = 0;

    do {
        cout << "Enter a number: "; cin >> uInput;
        sum += uInput;
    } while (uInput != 0);

    cout << "Sum of your numbers: " << sum << endl;

    return 0;

}

/*
 * NOTE
 * Using do-while here gives an opportunity to fit all the logic
 * in the loop body.
 * If using an if-statement inside of loop there would be no need
 * to use any code outside.
 */