// Write a program to reverse the given numbers.

#include<iostream>
using namespace std;

int main() {
    int a, reverse = 0, remender;

    cout<< "Enter a numbers to reverse it : ";
    cin>> a;

    while (a != 0) {
        remender = a % 10;                  
        reverse = reverse * 10 + remender; 
        a /= 10; 
    }

    cout<< "The reverse number is : " << reverse << "\n";

}