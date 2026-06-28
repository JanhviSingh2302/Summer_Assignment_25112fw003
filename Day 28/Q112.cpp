#include <iostream>
using namespace std;

int main() {
    char name[30];
    long long mobile;

    cout << "Enter Contact Name: ";
    cin >> name;

    cout << "Enter Mobile Number: ";
    cin >> mobile;

    cout << "\n----- Contact Details -----\n";
    cout << "Name   : " << name << endl;
    cout << "Mobile : " << mobile << endl;

    return 0;
}