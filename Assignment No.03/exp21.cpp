// To find the addition & substraction of complex number using cpp language. 

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
    Complex c1, c2, sum;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "\nEnter second complex number:" << endl;
    c2.input();

    sum = c1.add(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "\nSecond Complex Number: ";
    c2.display();

    cout << "\nSum of Complex Numbers: ";
    sum.display();

    return 0;
}