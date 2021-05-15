// In a program, you need to store the identification numbers
// of ten employees (as ints) and their weekly gross pay (as 
// doubles).
//     A) Define two arrays that may be used in parallel to store the ten 
//     employee identification numbers and gross pay amounts.
//     B) Write a loop that uses these arrays to print each employee's 
//     identification number and weekly gross pay

#include <iostream>

using namespace std;

void printIdAndPay(int[], double[], int);


int main() {
    const int SIZE = 10;
    int ids[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double grossPay[SIZE] = {895.33, 766.53, 909.75, 663.75, 590.90, 876.32, 1089.89, 789.92, 665.83, 763.42}; 
    printIdAndPay(ids, grossPay, SIZE);
    return 0;
}

void printIdAndPay(int ids[], double pay[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Employee " << ids[i] << ": $" << pay[i] << endl;
    }
    return;
}