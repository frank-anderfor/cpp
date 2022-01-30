/*
 * TASK #3
 * Write a program to calculate cumulative sum of numbers given from user
 * which finish running after user input 0. 
 * 
 * WHILE LOOP VERSION
 */

#include <iostream>

using namespace std;

int main()
{

    double uInput = 1;
    double sum = 0;

    while (uInput != 0)
    {
        cout << "Enter a number: ";
        cin >> uInput;
        sum += uInput;
    }

    cout << "Sum of your numbers: " << sum << endl;

    return 0;
}

/*
 * NOTE
 * This example show that modifying do-while loop into while
 * is not as fact as the opposite.
 * I had to changing double variable declaration
 * into declaration with initialization and add a little trick
 * with start value of user input (uInput = 1) to make the it works
 * at least once no matter what.
 * So do-while is more comfortable in this task.
 */