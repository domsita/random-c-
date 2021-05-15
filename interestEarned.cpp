#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double amount, principal, rate, timesCompounded;

    cout << "What is the principal? ";
    cin >> principal;
    cout << "What is the rate? ";
    cin >> rate;
    cout << "How many times does it compound? ";
    cin >> timesCompounded;

    rate = rate / 100;

    amount = principal * pow(1 + rate / timesCompounded, timesCompounded);

    cout << "Interest Rate: \t\t\t" << rate * 100 << "%" << endl;
    cout << "Times Compounded: \t\t" << timesCompounded << endl;
    cout << "Principal: \t\t\t$" << setprecision(2) << fixed << principal << endl;
    cout << "Interest: \t\t\t$" << amount - principal << endl;
    cout << "Amount in Savings: \t\t$" << amount << endl;

    return 0;
}
