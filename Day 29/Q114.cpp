#include <iostream>
using namespace std;

int main() {
    int n, arr[100], choice, sum = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n1.Display\n2.Sum\n3.Maximum\n4.Minimum\n";
    cin >> choice;

    switch (choice) {
        case 1:
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2:
            for (int i = 0; i < n; i++)
                sum += arr[i];
            cout << "Sum = " << sum;
            break;

        case 3: {
            int max = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] > max)
                    max = arr[i];
            cout << "Maximum = " << max;
            break;
        }

        case 4: {
            int min = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] < min)
                    min = arr[i];
            cout << "Minimum = " << min;
            break;
        }

        default:
            cout << "Invalid choice";
    }

    return 0;
}