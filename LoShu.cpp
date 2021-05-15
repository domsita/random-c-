#include <iostream>

using namespace std;

const int SIZE = 3;

int checkNumbers(int x, int y, int z) {
    return x + y + z;
}

bool checkLoShu(const int square[]) {
    int target = checkNumbers(square[0], square[4], square[8]);
    if (checkNumbers(square[6], square[4], square[2]) != target) 
        return false;
    for (int i = 0; i < 3; i++) {
        if (checkNumbers(square[(i*3)+0], square[(i*3)+1], square[(i*3)+2]) != target) 
            return false;
    }
    for (int j = 0; j < 3; j++) {
        if (checkNumbers(square[j+0], square[j+3], square[j+6]) != target)
            return false;
    }
    return true;    
}

int main() {
    const int LOSHUSQUARE[SIZE*SIZE] = {    4, 9, 2,
                                            3, 5, 7,
                                            8, 1, 6 };
    const int NONLOSHUSQUARE[SIZE*SIZE] = {     5, 9, 2,
                                                3, 4, 1,
                                                8, 7, 6 };
    const int LOSHUSQUARE2[SIZE*SIZE] = {   6, 1, 8,
                                            7, 5, 3,
                                            2, 9, 4 };
    const int NONLOSHUSQUARE2[SIZE*SIZE] = {    8, 1, 5,
                                                7, 6, 9,
                                                2, 3, 4 };
    cout << checkLoShu(LOSHUSQUARE) << endl;
    cout << checkLoShu(NONLOSHUSQUARE) << endl;
    cout << checkLoShu(LOSHUSQUARE2) << endl;
    cout << checkLoShu(NONLOSHUSQUARE2) << endl;
}
