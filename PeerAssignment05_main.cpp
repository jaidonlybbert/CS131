// Jaidon Lybbert
// 10.27.18
// Heron's Formula

#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;

double heron(double a, double b, double c) {
    double longSide, shortSide1, shortSide2;
    if (a > c) {
        longSide = a;
        shortSide1 = c;
        shortSide2 = b;
    } if (b > a) {
        longSide = b;
        shortSide1 = c;
        shortSide2 = a;
    } if (c > b) {
        longSide = c;
        shortSide1 = b;
        shortSide2 = a;
    } if (longSide >= (shortSide1 + shortSide2)) {
        cout << "Error: invalid triangle." << endl;
        return -1;
    }

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    double a, b, c;
    cout << "Enter first side length: ";
    cin >> a;
    cout << "Enter second side length: ";
    cin >> b;
    cout << "Enter third side length: ";
    cin >> c;

    cout << fixed;
    cout.precision(2);
    double area = heron(a, b, c);
    cout << "The area of the triangle is " << area << endl;
}
