//Max Jankowski
//Discussion week 2
//Hello Michael, This is the corrected code with comments

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    double sideA, sideB, hypotenuse;
    double radius, circumference;

    // Greeting
    cout << endl << "--------------------------------------------------" << endl;
    cout << "What is your first name? ";
    cin >> name;
    cout << endl << "Hello " << name <<  "!"  << endl;

    // Calculate the hypotenuse of a right triangle
    cout << endl << "Lets calculate the hypotenuse of a right triangle." << endl;
    cout << "Enter the length of side a: ";
    cin >> sideA;
    cout << "Now enter the length of side b: ";
    cin >> sideB;
    hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2)); //ERROR: missing end bracket on the line for calculation
    cout << fixed << setprecision(2);
    cout << "The hypotenuse of a right triangle with sides " << sideA << " and " <<
    sideB << " is " << hypotenuse << endl; //ERROR: This was the last one I found. Took me a bit. Great job.
                                                   // That makes 4 overall errors. that ';' on the prior line got me
    // Calculate the circumference of a circle
    cout << endl << "Great! Now lets calculate the circumference of a circle." << endl;
    cout << "Enter the circle's radius: ";
    cin >> radius;  //ERROR: incorrect operand for cin
    circumference = 2 * M_PI * radius; //ERROR: tricky, tricky. That was 3 errors thus far.
                                        // the error was the use of the letter 'x' vs the '*' operator
    cout << "The circumference of a circle with a radius of " << radius << " is " << circumference << endl;

    cout << "Thank you for using this app! Have a great day!" << endl;
    cout << endl << "--------------------------------------------------" << endl;
    return 0;
}