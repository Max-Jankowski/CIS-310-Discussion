//Max Jankowski
//week 5 discussion, errors 

#include <iostream>
using namespace std;

//Listing function prototypes before the main function

int daysInMonth(int year, int month);
int dayofYear(int day, int month, int year);
bool isItLeapYear(int year);

int main() {  //main function calls one function to count days

    int day, month, year;

    //Getting user to input date in
    cout << "Enter a date (mm/dd/yyyy): ";
    cin >> day >> month >> year;
    cout << endl;

    int dayOfTheYear = dayofYear(day, month, year);


    cout << "The day of the year is " << dayOfTheYear << endl;

    return 0;


}

int dayofYear(int day, int month, int year) { //counts the number of days in the year for the requested date
    int dayOfTheYear = 0;
    for (int i = 1; i <= month; i++) {
        dayOfTheYear += daysInMonth(year, i);
    }

    dayOfTheYear += day;
    return dayOfTheYear;
}
int daysInMonth(int year, int month) {   //This function uses a switch to determine the number of days in a month

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31; //sets number of days in these months to 31 to add to count
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:             //case 2 uses another function to listed below to determine if its a leap year
            return isLeapYear(year) ? 29 : 28; //assigns 29 if the leap year function returns true
    }
}

bool isItLeapYear(int year) {

    if (year % 4 == 0) {   //checks to see if the year is divisible by 4
        if (year % 100 == 0) { //checks to see if year number is divisible by 100
            if (year % 400 == 0) { //checks for divisible by 400
                return true;
            } else {
                return false;
            }
        }