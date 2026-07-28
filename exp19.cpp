// to find the given number is Armstrong or not.

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, remender, originalNum, result = 0;

    cout<< "Enter a number to find Armstrong Number : ";
    cin>> a;

    originalNum = a;

     while (originalNum != 0) {
        remender = originalNum % 10;                  
        //result += remender * remender * remender; 
        result=result+pow(remender,3);
        originalNum /= 10; 
    }
    
    cout<<result<<endl;
    
    if (result == a) {

        cout<< a << " Is a Armstrong Number." << endl;

    } else {

        cout<< a << " Is a not Armstrong Number." << endl;

    }

    return 0;
}