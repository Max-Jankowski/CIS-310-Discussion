//This program asks the uer to enter the dimensions for a shape and then calculates the area of the shape.
//correction made by Max Jankowski week 9 discussion 

#include <iostream>
#include <cmath> // A preferance addition to allow the use of M_PI. not required for the programe to run or function properly 
using namespace std;

#define M_PI 3.14

//create a class called Shape
class Shape {
public:

    virtual double getArea() = 0;
    virtual void displayArea() = 0;
};

//create a class called Rectangle that inherits from Shape
class Rectangle : public Shape { //syntax correction for class declaration 
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double getArea(){
        return length * width;        
    }
    void displayArea() {
        cout << "The area of the rectangle is: " << getArea() << endl;
    }
};

//create a class called Circle that inherits from Shape
class Circle : public Shape { // class declaration correction made hear (:)
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double getArea() {
        return M_PI * radius * radius;
    }
    void displayArea(){
        cout << "The area of the circle is: " << getArea() << endl;
    }
};

//main function
int main(){
    double length; 
    double width; 
    double radius;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    if (length <= 0 || width <=0) {         //added logical expression to validate input for rectangle
        cout << "Invalid entry" << endl;
        return 1;
    }
    
    Rectangle rectangle(length, width);
    rectangle.displayArea(); //correction made, see line 77
    
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    if (radius <= 0) {              //second input validation for the radius input
        cout << "Invalid entry" << endl;
        return 1;
    }
    
    Circle circle(radius);
    circle.displayArea(); //replace (:) with (.) to resolve member access issue
    
    return 0;
}
