// Schreiben Sie ein Beispiel für eine C++-Funktion, die eine globale Variable verwendet.

#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers;
void addNums(int n) {
    for (int i = 0; i < n; ++i) {
        numbers.push_back(i);
    }
}

int main() {
    addNums(10);
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}