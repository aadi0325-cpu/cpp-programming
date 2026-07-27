// To swap two numbers using third variable.

#include <iostream>
using namespace std;

int main(){
     int a, b, temp;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "\nBefore swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a; 
    a = b;   
    b = temp; 

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

}