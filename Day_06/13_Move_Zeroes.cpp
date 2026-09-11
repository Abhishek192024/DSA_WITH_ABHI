// Question:
// Move all zeroes to the end of the array while keeping the
// relative order of all non-zero elements the same.
//
// Example:
// Input:  0 1 0 3 12
// Output: 1 3 12 0 0
//
// Hint: Keep a position for the next non-zero element.
// Time: O(n), Space: O(1) extra

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
