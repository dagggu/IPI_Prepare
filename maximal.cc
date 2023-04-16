/* Schreibe eine generische Funktion max() die zwei Argumente 
   vom selben Typ erhält und das größere Argument zurückgibt. */

#include <iostream>

using namespace std;

template<typename T>

T maximal(T x, T y) {
   return (x > y) ? x : y;
}

int main() {
   cout << maximal(3, 5) << endl;
   cout << maximal(7.9, 3.2) << endl;

   return 0;
}