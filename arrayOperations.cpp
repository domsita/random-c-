#include <iostream>
#include <iomanip>

using namespace std;

const int ROWS = 4;
const int COLS = 5;

int getTotal(int[]);
double getAverage(int[]);
int getRowTotal(int[], int row);
int getColTotal(int[], int col);
int getHighestInRow(int[], int row);
int getLowestInRow(int[], int row);

int main() {
    int sampleArray[ROWS*COLS] = {      1,2,3,4,5,
                                        3,6,8,9,3,
                                        9,5,5,3,6,
                                        8,4,5,3,6   };

    cout << "Total: " << getTotal(sampleArray) << endl;
    cout << "Average: " << getAverage(sampleArray) << endl;
    cout << "Total for row 3: " << getRowTotal(sampleArray, 2) << endl;
    cout << "Total for col 4: " << getColTotal(sampleArray, 3) << endl;
    cout << "Highest in row 2: " << getHighestInRow(sampleArray, 1) << endl; 
    cout << "Lowest in row 1: " << getLowestInRow(sampleArray, 0) << endl;
    return 0;
}

int getTotal(int sampleArray[]) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total += sampleArray[i+j];
        }
    }
    return total;
}

double getAverage(int sampleArray[]) {
    double total = getTotal(sampleArray);
    return total / (ROWS * COLS);
}

int getRowTotal(int sampleArray[], int row) {
    int rowTotal = 0;
    for (int i = 0; i < COLS; i++) {
        rowTotal += sampleArray[(row * COLS) + i];
    }
    return rowTotal;
}

int getColTotal(int sampleArray[], int col) {
    int colTotal = 0;
    for (int i = 0; i < ROWS; i++) {
        colTotal += sampleArray[col + (i * COLS)];
    }
    return colTotal;
}

int getHighestInRow(int sampleArray[], int row) {
    int highest = INT_MIN;
    for (int i = 0; i < COLS; i++) {
        if (sampleArray[(row * COLS) + i] > highest) {
            highest = sampleArray[(row * COLS) + i];
        }
    }
    return highest;
}

int getLowestInRow(int sampleArray[], int row) {
    int lowest = INT_MAX;
    for (int i = 0; i < COLS; i++) {
        if (sampleArray[(row * COLS) + i] < lowest) {
            lowest = sampleArray[(row * COLS) + i];
        }
    }
    return lowest;
}