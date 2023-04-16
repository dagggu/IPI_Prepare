/* Schreibe eine abstrakte Basisklasse Shape, die eine geometrische Form repräsentiert.
   Definiere eine reine virtuelle Funktion area(), die die Fläche der Form zurückgibt. 
   Erstelle abgeleitete Klassen Circle und Rectangle, die area() implementieren. */

#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
    int radius;
public:
    void setRadius(int r) { radius = r; }
    float area() { return M_PI * radius*radius; }
};

class Rectangle : public Shape {
    int height;
    int width;
public: 
    void SetSides(int h, int w) {
        height = h;
        width = w;
    }

    float area() { return height*width; }
};

int main() {
    Circle c;
    c.setRadius(5);
    cout << "The area of this circle is " << c.area() << endl;

    Rectangle r;
    r.SetSides(20, 15);
    cout << "The area of this rectangle is " << r.area() << endl;

    return 0;
}