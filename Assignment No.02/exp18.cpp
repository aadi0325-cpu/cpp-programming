// To find the given number is palindrome number or not.

#include<iostream>
using namespace std;

int main() {
    int a, remender, originalNum;
     long long reversedNum = 0;

    cout<< "Enter a number to find is it palindrome or not : ";
    cin>> a;

    originalNum = a;
    
    while (a > 0) {
        remender = a % 10;                  
        reversedNum = reversedNum * 10 + remender; 
        a /= 10; 
    }

    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome number." << endl;
    } else {
        cout << originalNum << " is not a palindrome number." << endl;
    }


}