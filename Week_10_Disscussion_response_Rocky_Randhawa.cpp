#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Card {
    private:
        int number;

    public:
        // set method
        void setNumber(int number) {
            this->number = number;
        }

        // get method
        int getNumber() {
            return this->number;
        }

};


int calculateTotal(Card *cards, int numberOfCards);

int main() {

    // pointer named "pair" that points to a new array of type Card with a size of 2
    Card *pair = new Card[2]; //you declared this pair pointer as void, so it didnt call function set number

    // setting value, moving pointer, and then setting 2nd value in the array
    pair[0].setNumber(10);
    //pair++; 
    pair[1].setNumber(5);// changed the syntax for notation of arrays rather the using pointer line 34 and 36

    // pointer is currently pointing at the final element of the array, calculate the total value of the cards
    int result = calculateTotal(pair, 2);

    // output
    cout << "Expected value:  15" << endl;
    cout << "Resulting value: " << result << endl;

    delete[] pair; //array was not deleted properly, added []

    return 0;
}

// function to calculate total value of cards in an array of cards, pass by reference
int calculateTotal(Card *cards, int numberOfCards) {
    int total = 0;

    for (int i = 0; i < numberOfCards; i++) {
        total += cards[i].getNumber(); //debugger pointed to line 56
        //debugger was hung up on the cards incrementation 
    }

    return total;

}

//Max Jankowski 
//Week 10 discussion response