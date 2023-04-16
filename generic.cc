/* Schreibe eine generische Klasse Stack, die einen Stack von Elementen 
   des gleichen Typs verwaltet. Implementiere Funktionen push(), pop() und top(). */

/* #include <stack>
#include <iostream>

using namespace std;

template<typename V>
class Stack {
    stack<V> s;
public:
    void pushing(V el) {
        s.push(el);
    }

    void popping() {
        if (s.empty()) {
            throw "The Stack is empty";
        }
        s.pop();
    }

    void topping() {
        cout << s.top() << endl;
    }
};

int main() {
    Stack<int> myS;

    myS.pushing(2);
    myS.pushing(35);
    myS.pushing(20);
    myS.pushing(4);

    myS.popping();
    myS.popping();

    myS.topping();

    return 0;
} */

#include <iostream>
#include <vector>

template<typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(const T& element) {
        elements.push_back(element);
    }

    void pop() {
        if (elements.empty()) {
            throw std::out_of_range("Stack is empty.");
        }
        elements.pop_back();
    }

    T top() const {
        if (elements.empty()) {
            throw std::out_of_range("Stack is empty.");
        }
        return elements.back();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    std::cout << intStack.top() << std::endl;
    intStack.pop();
    std::cout << intStack.top() << std::endl;

    Stack<std::string> stringStack;
    stringStack.push("hello");
    stringStack.push("world");
    std::cout << stringStack.top() << std::endl;
    stringStack.pop();
    std::cout << stringStack.top() << std::endl;

    return 0;
}
