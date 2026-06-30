#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    int id[100];
    string name[100];
    float salary[100];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee ID: ";
        cin >> id[i];
        cin.ignore();
        cout << "Employee Name: ";
        getline(cin, name[i]);
        cout << "Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Details\n";
    for (int i = 0; i < n; i++) {
        cout << id[i] << "\t" << name[i] << "\t" << salary[i] << endl;
    }

    return 0;
}