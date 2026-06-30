#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    int id[100];
    string title[100];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nBook ID: ";
        cin >> id[i];
        cin.ignore();
        cout << "Book Name: ";
        getline(cin, title[i]);
    }

    cout << "\nLibrary Records\n";
    for (int i = 0; i < n; i++) {
        cout << id[i] << " - " << title[i] << endl;
    }

    return 0;
}