#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;

int main() {
    int listedNumber, sum, average, highest, lowest;
    string listedString;
    vector<int> numbers;
    // copy file to vector
    ifstream ifHand("input.txt");
    for(int i = 0; i < 21; i++) {
        getline(ifHand, listedString);
        listedNumber = atoi(listedString.c_str());
        numbers.push_back(listedNumber);
    } ifHand.close();

    highest = numbers[0];
    lowest = numbers[0];
    sum = 0;
    // iterate through the vector of numbers: determine high and low: find sum
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        if (numbers[i] > highest) {
            highest = numbers[i];
        } if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }
    // write vector to file
    ofstream ofHand("output.txt");
    average = (sum / numbers.size());
    ofHand << average << endl;
    ofHand << highest << endl;
    ofHand << lowest << endl;
    ofHand.close();
}
