#include <iostream> 
                                //Max Jankowski 
using namespace std;            //Original code by Aidan Jacoby
                                //Discussion response week 7
int main()
{
	int indexOne;
	int indexTwo;
	int finalNum;
	int numbers[10];
    

	for (int i = 0; i < 10; i++) {
		numbers [i] = rand() % 1000 + 1;  //Correction : arry not properly indexed. Use of () rather the []
	}
	cout << "Hello And Welcome To The 'Random' Number Machine!" << endl;
	
	cout << "Please Input A Number From Zero To Nine: ";
	cin >> indexOne;
	cout << "You Selected: " << numbers [indexOne] << endl; //Correction: Again wrong brackets were used. {} instead of []. Typo 'Z'
                                                             // also present 
	cout << "Please Input Another Number From Zero To Nine: ";
	cin >> indexTwo;
	cout << "You Selected: " << numbers[indexTwo] << endl;

	int random = rand() % 4 + 1;

	if (random == 1) {
		finalNum = numbers[indexOne] + numbers[indexTwo];
	}
	else if (random == 2) {
		finalNum = numbers[indexOne] - numbers[indexTwo];
	}
	else if (random == 3) {
		finalNum = numbers[indexOne] * numbers[indexTwo];
	}
	else {
		finalNum = numbers[indexOne] / numbers[indexTwo];
	}

	if (finalNum < 0) {
		finalNum *= -1;
	}

	cout << "Finally, After All Of That Wonderful Generation, Your Special Number is: " << finalNum << "!" << endl;

	return 0; // Missing the return statement
}