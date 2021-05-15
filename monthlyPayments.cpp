#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double payment, annualRate, monthlyRate, numberOfPayments, loanAmount, totalAmount;

    cout << "How much is your Annual Rate? ";
    cin >> annualRate;
    cout << "How much is your loan amount? ";
    cin >> loanAmount;
    cout << "How many payments? ";
    cin >> numberOfPayments;

    monthlyRate = annualRate / 12 / 100;
    payment = (monthlyRate * pow(1 + monthlyRate, numberOfPayments)) / (pow(1 + monthlyRate, numberOfPayments) - 1) * loanAmount;
    totalAmount = payment * numberOfPayments;

    cout << "Loan Amount: \t\t\t$" << setprecision(2) << fixed << loanAmount << endl;
    cout << "Monthly Interest Rate: \t\t" << monthlyRate * 100 << "%" << endl;
    cout << "Number of Payments: \t\t" << numberOfPayments << endl;
    cout << "Monthly Payment: \t\t$" << payment << endl;
    cout << "Amount Paid Back: \t\t$" << totalAmount << endl;
    cout << "Interest Paid: \t\t\t$" << totalAmount - loanAmount << endl;

    return 0;
}
