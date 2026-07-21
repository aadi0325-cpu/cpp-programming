// Calculate the factorial of giving number.

#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number to calculate the factorial :";
    cin>> a;

    int fact=1;
    for(int i=1; i<=a; i++) {
        fact = fact * i;
    }
    cout<< "factorial of "<<a<<"is"<<fact;
}