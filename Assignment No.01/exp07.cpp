// To swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << "Before swap : a = " << a << ", b = " << b << endl;

    a = a + b; 
    b = a - b; 
    a = a - b;

    cout << "After swap : a = " << a << ", b = " << b << endl;

}