#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 5;
    int monkeyFood[ROWS][COLS];
    int totalEaten = 0;
    int leastFoodEatenPerDay = INT_MAX;
    int mostFoodEatenPerDay = INT_MIN;

    for (int i = 0; i < ROWS; i++) {
        cout << "Monkey " << i + 1 << " ate: " << endl;
        for (int j = 0; j < COLS; j++) {
            while (monkeyFood[i][j] <= 0) {
                cout << "\t" << "Day " << j + 1 << ": ";
                cin >> monkeyFood[i][j];
                if (monkeyFood[i][j] <= 0) 
                    cout << "Please enter a number greater than 0: ";
            }
            totalEaten += monkeyFood[i][j];
            if (leastFoodEatenPerDay > monkeyFood[i][j])
                leastFoodEatenPerDay = monkeyFood[i][j];
            if (mostFoodEatenPerDay < monkeyFood[i][j])
                mostFoodEatenPerDay = monkeyFood[i][j];
            cout << endl;
        }
    }
    
    cout << "Average food eaten per day: " << fixed << setprecision(2) << totalEaten / (ROWS * COLS) << " lbs" << endl;
    cout << "Least food eaten per day: " << leastFoodEatenPerDay << " lbs" << endl;
    cout << "Most food eaten per day: " << mostFoodEatenPerDay << " lbs" << endl;
    return 0;
}