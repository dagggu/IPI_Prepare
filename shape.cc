/* Schreibe eine Basisklasse Shape, die eine geometrische Form repräsentiert, 
und eine abgeleitete Klasse Circle, die einen Kreis repräsentiert. Die Circle 
Klasse soll die Funktionen area() und circumference() implementieren, die die Fläche 
und den Umfang des Kreises zurückgeben. */ 

#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    float area(int r);
    float circumference(int r);
};

class Circle : public Shape {
public:
    float area(int r) {
        return M_PI * r*r;
    }

    float circumference(int r) {
        return 2 * M_PI * r;
    }
};

int main() {
    Circle c;
    cout << "Area of this circle is " << c.area(4) << endl;
    cout << "Circumference of this circle is " << c.circumference(4) << endl;

    return 0;
}