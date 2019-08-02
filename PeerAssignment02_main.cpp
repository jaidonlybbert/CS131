// Jaidon Lybbert
// Oct 3, 2018
// Savings Account Growth

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
// declare variables as double data type
    double initialDeposit, monthlyInterest, monthlyDeposit, balance,
        annualInterest, deposit;
// take input
    cout << "Please enter the initial deposit amount: ";
    cin >> initialDeposit;
    cout << "Please enter the annual interest rate: ";
    cin >> annualInterest;
    monthlyInterest = annualInterest / 1200;
    cout << "Please enter the recurring monthly deposit ";
    cin >> monthlyDeposit;
    cout << "--------------------" << endl << "Deposit    Balance" << endl
        << "--------------------" << endl;
// -----------------------------------
//    Print deposits and balances
// -----------------------------------
    cout << fixed;  // round to the cent
    cout.precision(2);

    balance = initialDeposit;
    cout << initialDeposit << "    " << balance << endl;
// I would use a for loop, but we aren't there in class yet
    deposit = monthlyInterest * balance;
    balance += deposit;
    cout << deposit << "    " << balance << endl;
    balance += monthlyDeposit;
    cout << monthlyDeposit << "    " << balance << endl;

    deposit = monthlyInterest * balance;
    balance += deposit;
    cout << deposit << "    " << balance << endl;
    balance += monthlyDeposit;
    cout << monthlyDeposit << "    " << balance << endl;

    deposit = monthlyInterest * balance;
    balance += deposit;
    cout << deposit << "    " << balance << endl;
    balance += monthlyDeposit;
    cout << monthlyDeposit << "    " << balance << endl;

    return 0;
}
