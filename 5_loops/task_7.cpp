/*
 * TASK #7
 * Write a program that provides an option to sum a survey results, where there are three different values.
 * Program's input are survey's question and three possible answers.
 * The first answer's value is 1, the second is 2 and the third is 3.
 * Answers are summed until the moment user inputs 0.
 * Then the program should show the surve's result.
 * Try to generate a bar graph showing results scaled in the way that they fit to screen
 * no matter what number of answers was given.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    string uAnswer = "";
    string qContent = "";

    int sumA = 0;
    int sumB = 0;
    int sumC = 0;

    int counter = 1;

    do {

        system("clear");

        // input some dummy content or survey question, who cares
        cout << "Question #" << counter << endl;
        cout << "Content: "; cin >> qContent;

        cin.ignore();

        // enter a loop to repeat asking for an answer until the satisfying is given
        while (true) {

            cout << "Answer: "; cin >> uAnswer;

            // evaluation of user input data
            if (uAnswer == "0") {
                cout << "SURVEY ABORTED - CALCULATING RESULT" << endl;
                cin.ignore();
                break;
            } else if (uAnswer == "1") {
                sumA++;
                cin.ignore();
                break;
            } else if (uAnswer == "2") {
                sumB++;
                cin.ignore();
                break;
            } else if (uAnswer == "3") {
                sumC++;
                cin.ignore();
                break;
            } else {
                cout << "INCORRECT ANSWER VALUE" << endl;
                cin.ignore();
            }

        }

        counter++;
        cin.ignore();

    } while (uAnswer != "0");

    system("clear");

    // correcting messy counter value
    counter -= 2;

    cout << "SURVEY RESULTS" << endl
         << "#1 Answers: " << sumA << endl
         << "#2 Answers: " << sumB << endl
         << "#3 Answers: " << sumC << endl
         << "# of Questions: " << counter << endl;
    
    cin.ignore();

    int max;

    // finding the maximum answer value
    if (sumA > sumB) {
        if (sumA > sumC) {
            max = sumA;
        } else {
            max = sumC;
        }
    } else if (sumB > sumC) {
        max = sumB;
    } else {
        max = sumC;
    }

    // finding complements of answer sums to invert
    // a bar graph upside down
    int complementA = max - sumA;
    int complementB = max - sumB;
    int complementC = max - sumC;

    // finding percentage values to make a bar graph
    // always fit in console screen
    int percentA = (complementA * 10) / max;
    int percentB = (complementB * 10) / max;
    int percentC = (complementC * 10) / max;

    // displaying a bar graph
    cout << "===============" << endl;
    cout << "---------------" << endl;
    cout << "---------------" << endl;
    for (int i = 10; i > 0; i--) {
        cout << "---";
        if (percentA) {
            cout << "-";
            percentA--;
        } else {
            cout << "O";
        }
        cout << "---";
        if (percentB) {
            cout << "-";
            percentB--;
        } else {
            cout << "O";
        }
        cout << "---";
        if (percentC) {
            cout << "-";
            percentC--;
        } else {
            cout << "O";
        }
        cout << "---" << endl;
    }
    cout << "=== === === ===" << endl;
    cout << "---1---2---3---" << endl;

    cin.ignore();

    return 0;

}

/*
 * NOTE
 * Well, it was fun, but I hope that functions will come as soon as possible.
 * Can't wait for OOP as weel and some file manipulation too.
 * 
 * I ignored the approximation problem, beacuse I'm lazy and it's late (8:30 P.M.)
 * You can blame me.
 * 
 * Please appreciate the comments.
 */