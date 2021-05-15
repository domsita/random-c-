#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int binarySearch(const int array[], int numElems, int value) {
    int first = 0;
    int last = numElems - 1;
    int middle;
    int position = -1;
    bool found = false;
    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (array[middle] ==  value) {
            found = true;
            position = middle;
        } else if (array[middle] > value) {
            last = middle - 1;
        } else {
            first = middle + 1;
        }
    }
    return position;
}

void selectionSort(int array[], int size) {
    int minIndex, minValue;
    for (int start = 0; start < (size - 1); start++) {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    unsigned seed = time(0);
    srand(seed);
    int arr[1000];
    for (int i = 0; i < 1000; i++) {
        arr[i] = (rand() % (1000 - 1 + 1)) + 1;
    }

    selectionSort(arr, 1000);

    for (int j = 0; j < 1000; j++) {
        cout << arr[j] << " ";
    }

    int position77 = binarySearch(arr, 1000, 77);
    if (position77 == -1) {
        cout << "Number 77 was not found." << endl;
    } else {
        cout << "Number 77 was found at position " << position77 + 1 << endl;
    }
}