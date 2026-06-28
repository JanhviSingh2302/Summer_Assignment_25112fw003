#include <iostream>
using namespace std;

int main() {
    int bookId;
    char bookName[50], author[50];

    cout << "Enter Book ID: ";
    cin >> bookId;

    cout << "Enter Book Name: ";
    cin >> bookName;

    cout << "Enter Author Name: ";
    cin >> author;

    cout << "\n----- Library Record -----\n";
    cout << "Book ID    : " << bookId << endl;
    cout << "Book Name  : " << bookName << endl;
    cout << "Author     : " << author << endl;

    return 0;
}