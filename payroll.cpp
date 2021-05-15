#include <iostream>
#include <iomanip>

using namespace std;

const int NUMEMPLOYEES = 7;

int main() {
    int empId[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[NUMEMPLOYEES] = {0, 0, 0, 0, 0, 0, 0};
    double payRate[NUMEMPLOYEES] = {0, 0, 0, 0, 0, 0, 0};
    double wages[NUMEMPLOYEES] = {0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < NUMEMPLOYEES; i++) {
        while (hours[i] < 1) {
            cout << "Hours for Employee " << empId[i] << ": ";
            cin >> hours[i];
            if (hours[i] <= 0) 
                cout << "Hours must be greater than 0" << endl;
        }
        while (payRate[i] <= 15.00) {
            cout << "Pay Rate for Employee " << empId[i] << ": ";
            cin >> payRate[i];
            if (payRate[i] <= 15.00) 
                cout << "Pay Rate must be greater than $15" << endl;
        }
    }

    for (int j = 0; j < NUMEMPLOYEES; j++) {
        wages[j] = hours[j] * payRate[j];
        cout << "Employee #" << empId[j] << " earned $" << fixed << setprecision(2) << wages[j] << endl;
    }
    return 0;
}