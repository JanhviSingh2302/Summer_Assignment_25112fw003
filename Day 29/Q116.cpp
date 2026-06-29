#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    Item item;

    cout << "Enter Item ID: ";
    cin >> item.id;

    cin.ignore();

    cout << "Enter Item Name: ";
    cin.getline(item.name, 50);

    cout << "Enter Quantity: ";
    cin >> item.quantity;

    cout << "Enter Price: ";
    cin >> item.price;

    cout << "\n----- Inventory Details -----\n";
    cout << "Item ID : " << item.id << endl;
    cout << "Name    : " << item.name << endl;
    cout << "Quantity: " << item.quantity << endl;
    cout << "Price   : " << item.price << endl;
    cout << "Total Value = " << item.quantity * item.price << endl;

    return 0;
}