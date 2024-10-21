#include <iostream>

using namespace std;

class Rectangle {
   private:  //Changes access specifier to private
    int length;
    int width;

    public: //made specifier public
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return l * w; //changed the variable in the return to reflect class variables
    }
};

class Circle { // you reversed the section for this class. 
   public:
    int radius;

    Circle(int r) {
        radius = r;
    }

   public:
    double area() { //to allow for a clearer output I made the variable a double
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle r(10, 15);
    Circle c(10);

    cout << "area of the circle: " << c.area() << endl;
    cout << "area of a rectangle: " << r.area() << endl;
}