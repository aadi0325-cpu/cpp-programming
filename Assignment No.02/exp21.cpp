// Write a program to calculate the addition & substraction of Complex Number.

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c)
    {
        Complex result;

        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }

    Complex subtract(Complex c)
    {
        Complex result;

        result.real = real - c.real;
        result.imag = imag - c.imag;

        return result;
    }

    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";
    }
};

int main()
{
    Complex c1, c2, addition, subtraction;

    cout << "Enter First Complex Number:" << endl;
    c1.input();

    cout << "\nEnter Second Complex Number:" << endl;
    c2.input();

    addition = c1.add(c2);

    subtraction = c1.subtract(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "\nSecond Complex Number: ";
    c2.display();

    cout << "\n\nAddition: ";
    addition.display();

    cout << "\nSubtraction: ";
    subtraction.display();

}