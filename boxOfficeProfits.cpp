#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double adultPrice = 10.00;
    const double childPrice = 6.00;
    string movieName;
    int adultTickets, childTickets;
    double grossProfits;

    cout << "What is the name of the movie: ";
    getline(cin, movieName);

    cout << "How many adult tickets were sold? ";
    cin >> adultTickets;

    cout << "How many child tickets were sold? ";
    cin >> childTickets;

    grossProfits = (adultTickets * adultPrice) + (childTickets * childPrice);

    cout << "Movie Name: \t\t\t\t" << movieName << endl;
    cout << "Adult Tickets Sold: \t\t\t" << adultTickets << endl;
    cout << "Child Tickets Sold: \t\t\t" << childTickets << endl;
    cout << "Gross Box Office Profit: \t\t$" << setprecision(2) << fixed << grossProfits << endl;
    cout << "Net Box Office Procit: \t\t\t$" << grossProfits * .2 << endl;
    cout << "Amount Paid To Distributor: \t\t$" << grossProfits * .8 << endl;

    return 0;
}
