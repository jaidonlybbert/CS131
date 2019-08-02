/*
Jaidon Lybbert
12.10.18
Final Exam: Program - F18
*/

#include<iostream>
#include<vector>
using namespace std;


// prints smallest element
void printSmallest(const vector<int>& inputVector) {
  int smallest = inputVector[0];
  for (int i = 1; i < inputVector.size(); i++) {
    if (inputVector[i] < smallest) {
      smallest = inputVector[i];
    }
  }
  cout << smallest << endl;
}


// prints largest element
void printLargest(const vector<int>& inputVector) {
  int largest = inputVector[0];
  for (int i = 1; i < inputVector.size(); i++) {
    if (inputVector[i] > largest) {
      largest = inputVector[i];
    }
  }
  cout << largest << endl;
}


// print vector forwards
void printVector(const vector<int>& inputVector) {
  for (int i = 0; i < inputVector.size(); i++) {
    cout << inputVector[i] << " ";
  }
  cout << endl;
}


// print vector in reverse
void printVectorReverse(const vector<int>& inputVector) {
  for (int i = (inputVector.size() - 1); i > -1; i--) {
    cout << inputVector[i] << " ";
  }
  cout << endl;
}


// swaps first with last, and second with second-to-last 
void swapElements(vector<int>& inputVector) {
  int temp;
  // swap first and last
  temp = inputVector[inputVector.size() - 1];
  inputVector[inputVector.size() - 1] = inputVector[0];
  inputVector[0] = temp;
  // swap second and second-to-last
  temp = inputVector[inputVector.size() - 2];
  inputVector[inputVector.size() - 2] = inputVector[1];
  inputVector[1] = temp;
}


int main() {
  vector<int> inputVector;
  int inputCount;
  int inputInteger = 1;

  // INPUT
  while(inputInteger != 0) {  // takes integer input until 0 is entered
    while(inputCount < 5 || inputInteger != 0) {  // user must enter at least 5 integers
      cout << "Enter a positive integer, or 0 to exit: ";
      cin >> inputInteger;
      if (inputInteger == 0 && inputCount < 5) {  
        cout << "Error: must input at least 5 values.\n";
        continue;
      }
      else if (inputInteger < 0) {
        cout << "Invalid input: must be a positive integer.\n";
        continue;
      } else if (inputInteger == 0) {
        break;
      }
      inputCount++;
      inputVector.push_back(inputInteger);
    }
  }

  // OUTPUT
  cout << "\nBefore swapping:\nForwards: ";
  printVector(inputVector);
  cout << "Backwards: ";
  printVectorReverse(inputVector);

  swapElements(inputVector);

  cout << "\nAfter swapping:\nForwards: ";
  printVector(inputVector);
  cout << "Backwards: ";
  printVectorReverse(inputVector);
  cout << "Largest: ";
  printLargest(inputVector);
  cout << "Smallest: ";
  printSmallest(inputVector);

  return 0;
}