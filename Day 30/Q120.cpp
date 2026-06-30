#include <iostream>
using namespace std;

int roll[100];
string name[100];
float marks[100];
int n;

void input() {
    cout << "Enter number of students: ";
    cin >> n;

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
}

void display() {
    cout << "\nStudent Records\n";
    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
    }
}

int main() {
    input();
    display();
    return 0;
}