// To claculate the numerator and denominator by using cpp language.

#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    void input()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    void display()
    {
        cout << "\nNumerator = " << numerator;
        cout << "\nDenominator = " << denominator;

        if (denominator != 0)
        {
            cout << "\nFraction = " << numerator << "/" << denominator;
        }
        else
        {
            cout << "\nError: Denominator cannot be zero.";
        }
    }
};

int main()
{
    Fraction f;

    cout << "Enter the values of a fraction:" << endl;

    f.input();

    f.display();

}