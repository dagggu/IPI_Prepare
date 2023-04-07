#include <cmath>
#include <iostream>

using namespace std;

class Figure {
public:
    double areaWithTwo(double a, double b);
    float areaWithOne(int a);
};

class Triangle : public Figure {
public:
    double areaWithTwo(double a, double b) {
        return (a*b)/2;
    }
};

class Rectangle : public Figure {
public:
    double areaWithTwo(double a, double b) {
        return a*b;
    }
};

class Pentagon : public Figure {
public:
    float areaWithOne(int a) {
        return 1.72 * a*a;
    }
};

class Circle : public Figure {
public:
    float areaWithOne(int a) {
        return M_PI * a*a;
    }
};

class Square : public Figure {
public:
    double areaWithTwo(double a, double b) {
        return a*a;
    }
};

int main() {
    Triangle t;
    cout << t.areaWithTwo(2, 5) << endl;

    Rectangle r;
    cout << r.areaWithTwo(3, 4) << endl;

    Circle c;
    cout << c.areaWithOne(7) << endl;

    Pentagon p;
    cout << p.areaWithOne(11) << endl;

    Square s;
    cout << s.areaWithTwo(11, 11) << endl;

    return 0;
}