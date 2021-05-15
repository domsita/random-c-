#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

const int QUESTIONS = 20;

int main() {
    ifstream answerFile;
    answerFile.open("examAnswers.txt");
    char answers[QUESTIONS];

    for (int i = 0; i < QUESTIONS; i++) {
        answerFile >> answers[i];
    }

    answerFile.close();
    
    char studentAnswers[QUESTIONS];
    bool isCorrect[QUESTIONS];
    int numCorrect = 0;

    for (int j = 0; j < QUESTIONS; j++) {
        cout << "Answer to question #" << j + 1 << ": ";
        cin >> studentAnswers[j];
        studentAnswers[j] = toupper(studentAnswers[j]);
        while (studentAnswers[j] != 'A' && studentAnswers[j] != 'B' && studentAnswers[j] != 'C' && studentAnswers[j] != 'D') {
            cout << "Answer must be A, B, C, or D." << endl;
            cout << "Answer to question #" << j + 1 << ": ";
            cin >> studentAnswers[j];
            studentAnswers[j] = toupper(studentAnswers[j]);
        }

        if (studentAnswers[j] == answers[j]) {
            isCorrect[j] = true;
            numCorrect++;
        } else {
            isCorrect[j] = false;
        }
    }

    if (numCorrect > 14) {
        cout << "Student Passed!" << endl;
    } else {
        cout << "Student Failed!" << endl;
    }

    cout << "Student correctly answered " << numCorrect << " questions." << endl;
    cout << "Student missed " << QUESTIONS - numCorrect << " questions." << endl;

    for (int k = 0; k < QUESTIONS; k++) {
        if (!isCorrect[k]) {
            cout << "Student missed question " << k + 1 << endl;
            cout << "\tStudent answered: " << studentAnswers[k] << endl;
            cout << "\tCorrect answer: " << answers[k] << endl;
        }
    }

    return 0;
}