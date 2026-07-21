//Calculate the table given by user.

#include<iostream>
using namespace std;

int main() {
    int a;

    cout<< "Enter a number to calculate the table :";
    cin>> a;

    for(int i=1; i<=10; i++){
        cout<<a<<"*"<<i<<"="<<a*i<<"\n";
    }
}