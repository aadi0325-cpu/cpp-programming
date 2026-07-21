// To check whether a number is positive or negative

#include<iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if (a > 0) {
        cout << a << " is a positive number." << endl;
    } 
    else if (a < 0) {
        cout << a << " is a negative number." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    } 
}