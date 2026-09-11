// Question:
// Delete the element from a given 0-based position in an array.
// Shift the remaining elements to the left.
//
// Example:
// Input:  5
//         10 20 30 40 50
//         Position = 2
// Output: 10 20 40 50
//
// Hint: Start shifting from the deletion position.
// Time: O(n), Space: O(n)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position";
        return 0;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
