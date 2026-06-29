#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int choice;

    cout << "Enter string: ";
    cin.getline(str, 100);

    cout << "\n1.Length\n2.Reverse\n3.Uppercase\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Length = " << strlen(str);
            break;

        case 2:
            for (int i = strlen(str) - 1; i >= 0; i--)
                cout << str[i];
            break;

        case 3:
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            cout << str;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}