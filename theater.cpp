#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int ROWS = 15;
const int SEATS = 30;
int SEAT[ROWS][SEATS];

void displaySeats();
void initializeSeats();
double getPrice(int row);
double buyTicket(int row, int seat);
double totalTicketsSold();
int getAvailableSeatsInRow(int row);
int totalSeatsAvailable();

int main(){
    int choice = 0;
    initializeSeats();
    displaySeats();
    while (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
        if (choice == 0) {
            cout << "(1)\tBuy Tickets" << endl;
            cout << "(2)\tSee how many seats are available" << endl;
            cout << "(3)\tSee how many seats have been sold" << endl;
            cout << "(4)\tSee how many seats are available in a particular row" << endl;
            cout << "What would you like to do? ";
            cin >> choice;
        }
        if (choice == 1) {
            int rowChoice, seatChoice;
            cout << "Which row would you like? ";
            cin >> rowChoice;
            cout << "Which seat would you like? ";
            cin >> seatChoice;
            if (!SEAT[rowChoice][seatChoice]) {
                SEAT[rowChoice][seatChoice] = 1;
                cout << "That will be " << getPrice(rowChoice) << endl;
                choice = 0;
            } else {
                cout << "That seat is unavailable." << endl;
                choice = 0;
            }
        }
        if (choice == 2) {
            cout << "There are " << totalSeatsAvailable() << " seats available." << endl;
            choice = 0;
        }
        if (choice == 3) {
            cout << "Total Sold: " << totalTicketsSold() << endl;
            choice = 0;
        }
        if (choice == 4) {
            int whichRow;
            cout << "Which Row? ";
            cin >> whichRow;
            cout << "There are " << getAvailableSeatsInRow(whichRow) << " seats available in row " << whichRow << endl;
            choice = 0;
        }
    }
}

void initializeSeats() {
    const int MIN = 0;
    const int MAX = 1;
    unsigned seed = time(0);
    srand(seed);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            SEAT[i][j] = (rand() % (MAX - MIN + 1));
        }
    }
}

void displaySeats() {
    cout << "\t\t\tSEATS" << endl;
    cout << "\t";
    for (int i = 0; i < SEATS; i++) {
        cout << (i + 1) % 10;
    }
    cout << endl;
    for (int i = 0; i < ROWS; i++) {
        cout << "ROW " << i + 1 << "\t";
        for (int j = 0; j < SEATS; j++) {
            if (SEAT[i][j]) {
                cout << '*';
            } else {
                cout << '#';
            }
        }
        cout << endl;
    }
    return;
}

double getPrice(int row) {
    row--;
    if (row < 2) 
        return 49.95;
    else if (row < 5) 
        return 39.95;
    else if (row < 8)
        return 27.50;
    else if (row < 11)
        return 15.95;
    else 
        return 11.95;
}

double buyTicket(int row, int seatNum) {
    row--;
    seatNum--;
    if (SEAT[row][seatNum]) {
        return 0.00;
    }
    SEAT[row][seatNum] = 1;
    return getPrice(row);
}

double totalTicketsSold() {
    double total = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            if (SEAT[i][j]) {
                total += getPrice(i);
            }
        }
    }
    return total;
}

int getAvailableSeatsInRow(int row) {
    row--;
    int seatsAvailable = 0;
    for (int i = 0; i < SEATS; i++)
        if (!SEAT[row][i])
            seatsAvailable++;
    return seatsAvailable;
}

int totalSeatsAvailable() {
    int available = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            if (!SEAT[i][j])
                available++;
        }
    }
    return available;
}