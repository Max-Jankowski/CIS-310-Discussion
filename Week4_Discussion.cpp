//Max Jankowski
//week 4 discussion
//I used the chapter 5 exercise 12 to install errors into

#include <iostream>

using namespace std;

int main() {

// Declaring variables
    int years = 0;
    int townPopulation_A, townPopulation_B;
    double townGrowth_A, townGrowth_B;

//Requesting user input
    cout << "Please enter the population of Town A:  " ;
    cin >> townPopulation_A;
    cout << endl;
    cout << "Please enter the rate of growth for Town A:  " ;
    cin >> townGrowth_A;
    cout << endl;

    cout << "Please enter the population of Town B:  " ;
    cin >> townPopulation_B;
    cout << endl;
    cout << "Please enter the rate of growth for Town B:  " ;
    cin >> townGrowth_B;
    cout << endl;

//The while loop for calculating years until town a surpasses Town b
    while (townPopulation_A < townPopulation_B)
        cout << "Year -  << years " << "   Town A - " << townPopulation_A;
        cout << "   Town B - " << townPopulation_B << endl;

        townPopulation_A = townPopulation_A + (townPopulation_A * (townGrowth_A / 100));
        townPopulation_B = townPopulation_B + (townPopulation_B * (townGrowth_B / 100 ));

        years ++;


    cout << "Town A's population will surpass town B in " << years << "years. " << endl;

    return 0:


}