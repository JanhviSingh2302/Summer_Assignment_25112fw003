#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int roll[100];
    string name[100];
    float marks[100];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No: ";
        cin >> roll[i];
        cin.ignore();
        cout << "Name: ";
        getline(cin, name[i]);
        cout << "Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Records\n";
    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
    }

    return 0;
}