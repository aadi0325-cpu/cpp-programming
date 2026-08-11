// to calculate the area and circumference of circle.

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14;   
    double radius, area, circumference;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;
    
    return 0;
}