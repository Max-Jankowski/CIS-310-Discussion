//Max Jankowski
//CS310
//Week 3 Discussion


//Program to calculate average hours booked by a mechanic and return input about how their doing
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double week1, week2, week3, average;  //declaring variables

    //getting input abouts hours booked ofer the last  weeks
    cout << "Enter the hours you booked in week 1: ";
    cin >> week1;
    cout << endl;

    cout << "Enter the hours you booked in week 2: ";
    cin >> week2;
    cout << endl;

    cout << "Enter the hours you booked in week 3: ";
    cin >> week2;
    cout << endl;

    //Calculating the average
    average = (week1 + week2 + week3) / 3;

    cout << fixed << setprecision(2);
    cout << "Your three week average for the last 3 weeks is " << average << " hours. << endl;

    //Control statement to output a message
    if (average >= 80)
        cout << "Your performance has been great, keep up the good work. " << endl;

    else if (average >= 60 && average < 80) {
        cout << "Your doing good, but you can make improvements. " << endl;
    }
    else if (average >= 40 && average < 60);
        cout << "This is a pretty average production, don't settle for average. " << endl;

    else
        cout << "How are you even surviving, these are pathetic numbers. " << endl;


    return ;
}