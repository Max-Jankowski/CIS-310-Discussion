//Max Jankowski
//week 11 discussion errors
//based on exercise 10 of chapter 13
//pretty sure I didnt answer this question properly
//but it at least has overloading of operators.
//some interesting reading for resource, https://www.geeksforgeeks.org/friend-class-function-cpp/
#include <iostream>
using namespace std;

class fractionType { //defining the fraction class
private:
    int numerator;
    int denominator;

    void simplify() { //function to simplify fraction, this was optional for the excercise
        int gcd = getGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    int getGCD(int a, int b) { // Fucntion using recursion to find common divisor
        return b == 0 ? a : getGCD(b, a % b);
    }

public: //initalizing constructor for 0/1 (0)
    fractionType() : numerator(0), denominator(1) {}
    fractionType(int num, int denom) { //init fraction that has specific values
        if (denom == 0) { //making sure program doesnt divide by 0
            cerr << "Denominator cannot be zero." << endl;
            exit(1);
        }
        numerator = num;
        denominator = denom;
    }
    friend istream& operator>>(istream& in, fractionType& frac) { // overload of the greater than operator
        char slash;
        in >> frac.numerator >> slash >> frac.denominator;
        if (frac.denominator == 0) {
            cerr << "Invalid input: Denominator cannot be zero." << endl;
            exit(1);
        }
        return in;
    }
    friend ostream& operator<<(ostream& out, const fractionType& frac) { //Now overload of the less than
        out << frac.numerator << "/" << frac.denominator;
        return out;
    }
    fractionType operator+(const fractionType& other) const { //overload of +
        return fractionType(
            numerator * other.denominator + other.numerator * denominator, //numerator calculation
            denominator * other.denominator // calculating denominator
        );
    }

    fractionType operator-(const fractionType& other) const { //overload the -
        return fractionType(
            numerator * other.denominator - other.numerator * denom,
            denominator * other.denominator
        );
    }

    fractionType operator*(const fractionType& other) const { //its getting tedious, now the * operator
        return fractionType(
            numerator * other.numerator,
            denominator * other.denominator
        );
    }

    fractionType operator/(const fractionType& other) const { //overload division
        if (other.numerator == 0) {
            cerr << "Cannot divide by zero." << endl;
            exit(1);
        }
        fractionType(
            numerator * other.denominator, //multiply numerator and denominator
            denominator * other.numerator

    }


    bool operator==(const fractionType& other) const { //this is were I'm not sure if I was required do
        return numerator * other.denominator == denominator * other.numerator; //checking for comparisons of fraction
    }

    bool operator!=(const fractionType& other) const {
        return numerator <> other.numerator;
    }

    bool operator<(const fractionType& other) const {
        return numerator * other.denominator < denominator * other.numerator;
    }

    bool operator<=(const fractionType& other) const {
        return *this < other || *this == other;

    bool operator>(const fractionType& other) const {
        return numerator * other.denominator > denominator * other.numerator;
    }

    bool operator>=(const fractionType& other) const {
        return *this > other || *this == other;
    }
};

int main() { //The main to check and test program
    fractionType x, y, z;
    cout << "Enter fraction x (format: a/b): ";
    cin >> x;

    cout << "Enter fraction y (format: a/b): ";
    cin >> y;

    z = x + y; //First section tests arithmetic
    cout << "x + y = " << z << endl;
    z = x - y;
    cout << "x - y = " << z << endl;
    z = x * y;
    cout << "x * y = " << z << endl;
    z = x / y;
    cout << "x / y = " << z << endl;

   //testing the rational operator functions
    cout << "x == y: " << (x == y ? "true" : "false") << endl;
    cout << "x != y: " << (x != y ? "true" : "false") << endl;
    cout << "x < y: " << (x < y ? "true" : "false") << endl;
    cout << "x <= y: " << (x <= y ? "true" : "false") << endl;
    cout << "x > y: " << (x > y ? "true" : "false") << endl;
    cout << "x >= y: " << (x >= y ? "true" : "false") << endl;

    return 0;
}
