#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double test1, test2, test3, test4, test5, avg;

    cout << "Please enter your first name: ";
    getline(cin, name);

    cout << "Please enter 5 test scores " << name << '\n';

    cout << "Test 1: ";
    cin >> test1;

    cout << "Test 2: ";
    cin >> test2;

    cout << "Test 3: ";
    cin >> test3;

    cout << "Test 4: ";
    cin >> test4;

    cout << "Test 5: ";
    cin >> test5;

    avg = (test1 + test2 + test3 + test4 + test5) / 5;

    cout << name << ", your average test score is " << avg;

    return 0;
}
