#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    ofstream outputFile("grades.txt");

    for (int i = 0; i < 50; i++) {
        outputFile << rand() % 35 + 65 << endl;
    }

    outputFile.close();
    return 0;
}