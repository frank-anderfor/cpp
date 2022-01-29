/*
 * TASK #1
 * Ask the user for the age of two people and indicate who is older.
 * If both of them are older than 100 years, the program should
 * behave in a special way.
 */

#include <iostream>

using namespace std;

int main() {

    int person_1, person_2;

    cout << "Enter the age of the first person: "; cin >> person_1;
    cout << "Enter the age of the second person: "; cin >> person_2;

    if (person_1 > person_2) {
        cout << "The first person is older than the second one." << endl;
    } else if (person_1 < person_2) {
        cout << "The first person is younger than the second one." << endl;
    } else {
        cout << "The first and the second person are in the same age." << endl;
    }

    if (person_1 > 100 && person_2 > 100) {
        cout << "Woah! What a beutiful age they are!" << endl;
    }

    return 0;

}