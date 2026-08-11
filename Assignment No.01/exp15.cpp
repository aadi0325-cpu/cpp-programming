
// To print the first 'n' natural numbers using a while loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int i = 1; 

    while (i <= n) {
        cout << i << " ";
        i++; 
    }

    cout << endl;
    return 0;
}