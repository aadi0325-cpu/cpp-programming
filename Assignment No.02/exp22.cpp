// To claculate the numerator and denominator by using cpp language.

#include <iostream>
using namespace std;

class Fraction
{
private:
    int num;
    int den;

public:
    void input()
    {
        cout << "Enter numerator: ";
        cin >> num;

        cout << "Enter denominator: ";
        cin >> den;
    }

    Fraction add(Fraction f)
    {
        Fraction result;

        result.num = (num * f.den) + (f.num * den);

        result.den = den * f.den;

        return result;
    }

    void display()
    {
        cout << num << "/" << den;
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


    cout << "\nFirst Fraction: ";
    f1.display();

    cout << "\nSecond Fraction: ";
    f2.display();

    cout << "\n\nAddition: ";
    sum.display();

}