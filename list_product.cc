/* Schreiben Sie eine Funktion in C++, die eine Liste von Zahlen 
   akzeptiert und das Produkt aller Zahlen zurückgibt. */

#include <vector>
#include <iostream>

using namespace std;

int p = 1;
int product(vector<int> v) {
    for(int i = 0; i < v.size(); ++i) {
        p *= v[i];
    }
    return p;
}

int main() {
    vector<int> myVec = {1, 2, 6, 2, 3};
    cout << product(myVec) << endl;

    return 0;
}