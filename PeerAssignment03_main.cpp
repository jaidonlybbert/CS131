// Jaidon Lybbert
// 10.9.18
// Area of a pentagon

#include<math.h>
#include<iostream>
#include<iomanip>
// Calculate area
void pentagonArea(double radius) {
    const double PI = 3.14159265358979323846;
    double sideLength = 2 * radius * sin(PI / 5);
    double area = (5 * pow(sideLength, 2)) / (4 * (tan(PI / 5)));
    std::cout << fixed;
    std::cout.precision(2);
    std::cout << area << endl << endl;
}
// Display results
int main() {
    double radius;
    std::cout << "\n-----Area of a Pentagon-----\nPlease enter the radius: ";
    std::cin >> radius;
    std::cout << "The area is: ";
    pentagonArea(radius);
}
