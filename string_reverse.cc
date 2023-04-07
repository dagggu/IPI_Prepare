/* Schreiben Sie eine Funktion in C++, die einen String umkehrt. */

#include <string>
#include <iostream>

using namespace std;

string foo(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    string str = "Hello World!";
    cout << foo(str) << endl;

    return 0; 
}