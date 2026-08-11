// To perform addition, subtraction, multiplication, division and mod of two numbers.

#include<iostream>
using namespace std;

int main(){

int a, b , sum, sub, mul, div, mod;

cout << "Enter any two number :  ";
cin >> a >> b;
sum = a + b;
cout<<"Addition of two no : \n"<<sum;

sub = a - b;
cout<<"Substraction of two no : \n"<<sub;

mul = a * b;
cout<<"Multiplication of two no : \n"<<mul;

div = a / b;
cout<<"Division of two no : \n"<<div;

mod = a % b;
cout<<"Mod of two no : \n"<<mod;

}