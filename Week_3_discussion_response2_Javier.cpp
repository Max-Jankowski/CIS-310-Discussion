//Max Jankowski
//Discussion week 3
//Corrections to Javier Lopez program

#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter your grade: ";
    cin >> grade;  //incorrect function. this was a cout

    // If grade 60 or greater and 100 or less
    if (grade <= 100 && grade >= 60) {       //The boolean operator was missing here
        cout << "You've got a passing grade." << endl;
    } else if (grade <= 59 && grade >= 0) {  //This was a single & as opposed to the double to conform to proper syntax
        cout << "You got a failing grade." << endl;
    } else {
        cout << "Invalid Grade" << endl;
    }

    return 0;
}