/*
 * TASK #2
 * Change the calculator program in the way that each kind of operation
 * was carried out in a separate function.
 */

/* HEADERS */
#include <iostream>

/* NAMESPACES */
using namespace std;

/* PROTOTYPES */
double getProduct(double arg1, double arg2);
double getQuotient(double arg1, double arg2);
double getSum(double arg1, double arg2);
double getDifference(double arg1, double arg2);

void calcuLate();

/* MAIN FUNCTION BODY */
int main() {

    calcuLate();

    return 0;

}

/* AUXILIARY FUNCTION BODIES */
double getProduct(double arg1, double arg2) {
    return arg1 * arg2;
}

double getQuotient(double arg1, double arg2) {
    return arg1 / arg2;
}

double getSum(double arg1, double arg2) {
    return arg1 + arg2;
}

double getDifference(double arg1, double arg2) {
    return arg1 - arg2;
}

void calcuLate() {

    double argument_1, argument_2;
    string action;

    cout << "Argument #1: "; cin >> argument_1;
    cout << "Argument #2: "; cin >> argument_2;
    cout << "Action: "; cin >> action;

    if (action == "*") {
        cout << "Product: " << getProduct(argument_1, argument_2);
    } else if (action == "/") {
        cout << "Quotient: " << getQuotient(argument_1, argument_2);
    } else if (action == "+") {
        cout << "Sum: " << getSum(argument_1, argument_2);
    } else if (action == "-") {
        cout << "Difference: " << getDifference(argument_1, argument_2);
    } else {
        cout << "Unknown action.";
    }

    cout << endl;  
}