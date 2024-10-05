/*
 * Original post by Boris Davis
 * corrections by Max Jankowski
 * week 6 discussion post reply
	Description: Choose between three colors.
*/

#include <iostream>

using namespace std;

enum ThreeColors{red, yellow, blue}; //I added the missing semicolon

int main()
{
	//removed the variable declaration in this section as it is not needed since the constants where already defined

	int your_Input;

	cout << "This is a simple program that lets the user choose between three colors." << endl;

	cout << "\nEnter 1, 2, or 3: " << endl;
	cin >> your_Input; //corrected the syntax on this line 

	if (your_Input == 1)
	{
		cout << "\nYou chose red." << endl;
	}
	else if (your_Input == 2)
	{
		cout << "\nYou chose yellow." << endl;
	}
	else if (your_Input == 3)
	{
		cout << "\nYou chose blue." << endl;
	}
	else
	{
		cout << "\nInvalid input. Please only enter 1, 2, or 3." << endl;
	}

	cout << "\nPress any key to continue..." << endl;

	return 0;
}