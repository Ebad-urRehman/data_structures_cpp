#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n;

    cout << "How many elements you want to enter (max = 10): ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;

    int x;

    cout << "Enter the number you want to delete: ";
    cin >> x;

    // Find the position of the number in the array
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        // Shift elements to the left to remove the element
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ",";
        }
        cout << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}