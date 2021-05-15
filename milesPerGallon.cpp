#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double gallons;
    int milesFullTank;

    cout << "How many gallons does the card hold? ";
    cin >> gallons;
    cout << "How many miles can be driven on a full tank? ";
    cin >> milesFullTank;

    cout << "Miles per gallon: " << milesFullTank / gallons;

    return 0;
}
