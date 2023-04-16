/* Schreibe eine Klasse Person, die eine Person repräsentiert. Definiere 
   private Member name und age, sowie öffentliche Member-Funktionen setName(), 
   setAge(), getName() und getAge(). */

#include <string>
#include <iostream>

using namespace std;

class Person {
public: 
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }

    string getName() { return name; }
    int getAge() { return age; }
private:
    string name;
    int age;
};

/* Schreibe eine abgeleitete Klasse Student, die eine Person ist und 
   zusätzlich einen öffentlichen Member setStudentID() hat. */
class Student : public Person { 
    int studentID;
public:
    void setStudentID(int s) { studentID = s; }
    int getStudentID() { return studentID; }
};

int main() {
    Student s;
    s.setName("Jeff");
    s.setAge(19);
    s.setStudentID(28366);

    cout << "Hey, my name is " << s.getName() << " and I'm " << s.getAge() << " years old!" << endl; 
    cout << "Oh, and I'm also a student, here is my Student ID: " << s.getStudentID() << "!" << endl;

    return 0;
}