// Jaidon Lybbert
// 11.1.18
// Midterm Temp convert
#include <iomanip> // fixed, precision
#include <iostream>
using namespace std;
// function converts temperatures
double tempConvert(char fromType, char toType, double fromTemp) {
  if (fromType == 'C' && toType == 'F') {
    return fromTemp * 9/5 + 32;
  } else if (fromType == 'C' && toType == 'K') {
    return fromTemp + 273.15;
  } else if (fromType == 'F' && toType == 'C') {
    return (fromTemp - 32) * 5/9;
  } else if (fromType == 'F' && toType == 'K') {
    return (fromTemp + 459.67) * 5/9;
  } else if (fromType == 'K' && toType == 'C') {
    return fromTemp - 273.15;
  } else if (fromType == 'K' && toType == 'F') {
    double C = tempConvert('K', 'C', fromTemp);
    return tempConvert('C', 'F', C);
  } else {
    cout << "An unexpected error has occurred, debugging needed";
    exit(0);
  }
}
// passes user input to functions to be converted; prints results
int main() {
  double fromTemp;
  cout << fixed;
  cout.precision(0);
// Input
  cout << "Input a temperature: ";
  cin >> fromTemp;
// Output
  cout << "C to F: " << tempConvert('C', 'F', fromTemp) << endl;
  cout << "C to K: " << tempConvert('C', 'K', fromTemp) << endl;
  cout << "F to C: " << tempConvert('F', 'C', fromTemp) << endl;
  cout << "F to K: " << tempConvert('F', 'K', fromTemp) << endl;
  cout << "K to C: " << tempConvert('K', 'C', fromTemp) << endl;
  cout << "K to F: " << tempConvert('K', 'F', fromTemp) << endl;
}
