// To calculate the area and perimeter of rectangle.

#include <iostream>
using namespace std;

int main() {
    double length, width, area, perimeter;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    std::cout << "\nArea of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}