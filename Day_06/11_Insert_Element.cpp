// Question:
// Insert a new element at a given 0-based position in an array.
// Shift the required elements to the right.
//
// Example:
// Input:  4
//         10 20 30 40
//         Position = 2, Value = 25
// Output: 10 20 25 30 40
//
// Hint: Start shifting from the last element.
// Time: O(n), Space: O(n)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos, value;
    cin >> pos >> value;

    if (pos < 0 || pos > n) {
        cout << "Invalid position";
        return 0;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
