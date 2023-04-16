/* Schreibe eine Basisklasse Animal, die ein Tier repräsentiert und eine 
   virtuelle Funktion makeSound() enthält. Definiere abgeleitete Klassen Dog 
   und Cat, die jeweils eine implementierte makeSound() Funktion haben. */

#include <iostream>

using namespace std;

class Animal {
public:
    virtual void makeSound() { cout << "I'm an animal and I can make sounds!" << endl; };
};

class Dog : public Animal {
public:
    void makeSound() { cout << "Woof Woof!!" << endl; }
};

class Cat : public Animal {
public:
    void makeSound() { cout << "Meow Meow..." << endl; }
};

int main() {
    Dog d;
    Cat c;

    d.makeSound();
    c.makeSound();

    return 0;
}