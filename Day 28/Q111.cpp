#include <iostream>
using namespace std;

int main() {
    char name[30];
    int tickets;
    const int price = 250;

    cout << "Enter Customer Name: ";
    cin >> name;

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    int total = tickets * price;

    cout << "\n----- Ticket Details -----\n";
    cout << "Name: " << name << endl;
    cout << "Tickets: " << tickets << endl;
    cout << "Total Amount: Rs. " << total << endl;

    return 0;
}