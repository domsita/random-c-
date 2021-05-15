#include <iostream>
#include <fstream>

using namespace std;

const int STUDENTS = 10;
const int TESTS = 5;

void printScores(int[STUDENTS][TESTS]);
void studentAverage(int[TESTS]);
void testAverage(int[STUDENTS][TESTS]);

int main() {
    ifstream inputFile("grades.txt");
    int scores[STUDENTS][TESTS];
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < TESTS; j++) {
            inputFile >> scores[i][j];
        }
    }

    inputFile.close();

    printScores(scores);

    for (int i = 0; i < STUDENTS; i++) {
        studentAverage(scores[i]);
    }

    testAverage(scores);

    return 0;
}

void printScores(int grades[STUDENTS][TESTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < TESTS; j++) {
            cout << grades[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void studentAverage(int grades[TESTS]) {
    float total = 0;
    for (int i = 0; i < TESTS; i++) {
        total += grades[i];
    }
    cout << total / TESTS << endl;
    return;
}

void testAverage(int grades[STUDENTS][TESTS]) {
    cout << "TEST AVERAGE SCORES" << endl;
    for (int i = 0; i < TESTS; i++) {
        float total = 0;
        for (int j = 0; j < STUDENTS; j++) {
            total += grades[j][i];
        }
        cout << total / STUDENTS << endl;
    }
    return;
}