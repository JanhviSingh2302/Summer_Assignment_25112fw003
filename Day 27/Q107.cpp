#include <iostream>
using namespace std;

int main() {
    int empId;
    char name[30];
    float basic, hra, da, gross;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    cout << "\n----- Salary Details -----\n";
    cout << "Employee ID : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary : " << basic << endl;
    cout << "HRA : " << hra << endl;
    cout << "DA : " << da << endl;
    cout << "Gross Salary : " << gross << endl;

    return 0;
}