// Jaidon Lybbert
// 9.26.18 
// US population growth

#include<iostream>
#include<iomanip>  // precision
using namespace std;

int main() {
    float oldPopulation, birthRate, deathRate, immigrationRate,
        projectedPopulation;
    
    // US population as of Jan 1st, 2018
    oldPopulation = 326971209;
    
    // 1/8 birth per second * minutes * hours * days
    birthRate = 1 / 8.0 * 60 * 60 * 24 * 365;
    
    // 1/12 death per second
    deathRate = 1 / 12.0 * 60 * 60 * 24 * 365;
    
    // 1/28 immigrants per second
    immigrationRate = 1 / 28.0 * 60 * 60 * 24 * 365;
    
    projectedPopulation = oldPopulation - deathRate + birthRate +
        immigrationRate;
    
    cout << fixed;  // set format flag of floatfield to 'fixed'
    cout.precision(2);  // in 'fixed' mode precision indicates decimal places
    cout << "The projected population for January 1, 2019, is " 
        << projectedPopulation << "." << endl;
    
    return 0;
}
             
    
    
    
    
    
