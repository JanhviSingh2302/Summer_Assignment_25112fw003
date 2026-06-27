#include <iostream>
using namespace std;

int main() {
    char name[30];
    int roll;
    float m1, m2, m3, total, percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\n----- Marksheet -----\n";
    cout << "Name : " << name << endl;
    cout << "Roll No : " << roll << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+";
    else if (percentage >= 75)
        cout << "Grade: A";
    else if (percentage >= 60)
        cout << "Grade: B";
    else if (percentage >= 40)
        cout << "Grade: C";
    else
        cout << "Grade: Fail";

    return 0;
}