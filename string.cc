#include <iostream>

using namespace std;

class Rechteck {
// Aufgabe a) hier private Datenmitglieder einfuegen
    double _a;
    double _b;
    double _c;
    double _d;
public:
    // fuer Aufgabe a)
    Rechteck(); // ein Einheitsquadrat
    Rechteck(double a, double b, double c, double d); // allg. Rechteck
    Rechteck(double a, double c, double len); // ein Quadrat
    bool empty (); // wahr wenn Rechteck leer ist
    
    // fuer Aufgabe b)
    Rechteck(const Rechteck& R);
    ~Rechteck();
    Rechteck& operator= (const Rechteck& R);

    // fuer Aufgabe c)
    Rechteck vereinigung(Rechteck R); 
    Rechteck schnitt(Rechteck R);
};

Rechteck::Rechteck() {
    _a = 0;
    _b = 1;
    _c = 0;
    _d = 1;
}

Rechteck::Rechteck(double a, double b, double c, double d) {
    if(a > b || c > d) { 
        cout << "Ungültiger Rechteck" << endl;
    } else {
        _a = a;
        _b = b;
        _c = c;
        _d = d;
    }
}

Rechteck::Rechteck(double a, double c, double len) {
    if(a > len || c > len) { 
        cout << "Ungültiges Quadrat" << endl;
    } else {
        _a = a;
        _b = len; 
        _c = c;
    }
}

bool Rechteck::empty() {
    return _a == 0 && _b == 0 && _c == 0 && _d == 0;
}