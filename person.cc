// Schreiben Sie eine C++-Klasse, die eine Person mit Namen und Alter darstellt.

#include <string>
#include <iostream>

using namespace std;

class Person {
public: 
    Person(string n, int a) : name(n), age(a) {}

    void information() { cout << "Hey! My name is " << name << " and I'm " << age << " years old!" <<endl; }
private:
    string name;
    int age;
};

int main() {
    Person p1("Popa", 13);
    p1.information();

    Person p2("Kind Eeh", 320);
    p2.information();

    return 0;
}