#include <iostream>

using namespace std;

string lexicographicalOrder(string arr[], int size);
int sum2dArray(int arr[][4], int rows);
void studentAverage(int arr[][4], int rows);
void testAverage(int arr[][4], int rows);

int main() {
    // string strings[5] = {"aaa", "calms", "clams", "potato", "a"};
    // cout << lexicographicalOrder(strings, 5) << endl;

    // string strings2[5] = {"zzz", "hhh", "bbb", "AAA", "aaa"};
    // cout << lexicographicalOrder(strings2, 5) << endl;

    // string strings3[5] = {"pto", "potato", "calipers", "bandaid", "microphone"};
    // cout << lexicographicalOrder(strings3, 5) << endl;

    const int ROWS = 3;
    const int COLS = 4;
    // int sampleArray[ROWS][COLS] =   {   {2, 4, 6, 7},
    //                                     {3, 8, 12, 9},
    //                                     {4, 6, 10, 11}  };
    // cout << sum2dArray(sampleArray, ROWS) << endl;

    int testGrades[ROWS][COLS] = {  {   100, 86, 78, 94 },
                                    {   88, 78, 99, 64  },
                                    {   75, 89, 92, 87  }    };

    studentAverage(testGrades, ROWS);
    testAverage(testGrades, ROWS);

    return 0;
}

void studentAverage(int arr[][4], int rows) {
    for (int i = 0; i < 3; i++) {
        float score = 0;
        for (int j = 0; j < rows; j++) {
            score += arr[i][j];
        }
        cout << "Student " << i+1 << " " << score / 4 << endl;
    }
    return;
}

void testAverage(int arr[][4], int rows) {
    for (int i = 0; i < 4; i++) {
        float testScore = 0;
        testScore += arr[0][i] + arr[1][i] + arr[2][i];
        cout << testScore / 3 << endl;
    }
    return;
}

int sum2dArray(int arr[][4], int rows) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}


string lexicographicalOrder(string arr[], int size) {
    if (size == 0) {
        return "";
    }
    if (size == 1) {
        return arr[0];
    }
    string first = arr[0];
    for (int i = 1; i < size; i++) {
        if (first > arr[i]) {
            first = arr[i];
        }
    }
    return first;
}

void numbersArray() {
    const int SIZE = 10;
    int numbers[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int j = 0; j < SIZE; j++) {
        cout << numbers[j] << " ";
    }
    cout << endl;

    for (int k = 0; k < SIZE; k++) {
        cout << numbers[SIZE - k - 1] << " ";
    }
    cout << endl;
}