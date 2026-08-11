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

    Fraction add(Fraction f)
    {
        Fraction result;

        result.numerator = (numerator * f.denominator) +
                           (f.numerator * denominator);

        result.denominator = denominator * f.denominator;

        return result;
    }

    Fraction subtract(Fraction f)
    {
        Fraction result;

        result.numerator = (numerator * f.denominator) -
                           (f.numerator * denominator);

        result.denominator = denominator * f.denominator;

        return result;
    }

    void display()
    {
        cout << numerator << "/" << denominator;
    }
};

int main()
{
    Fraction f1, f2, sum, difference;

    cout << "Enter First Fraction:" << endl;
    f1.input();

    cout << "\nEnter Second Fraction:" << endl;
    f2.input();

    sum = f1.add(f2);

    difference = f1.subtract(f2);

    cout << "\nFirst Fraction: ";
    f1.display();

    cout << "\nSecond Fraction: ";
    f2.display();

    cout << "\n\nAddition: ";
    sum.display();

    cout << "\nSubtraction: ";
    difference.display();

}