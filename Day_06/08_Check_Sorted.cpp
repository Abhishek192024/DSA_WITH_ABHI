// Question:
// Check whether an array is sorted in non-decreasing order.
//
// Example:
// Input:  5
//         1 2 2 4 7
// Output: Sorted
//
// Example:
// Input:  4
//         1 5 3 7
// Output: Not Sorted
//
// Hint: Compare each element with the previous element.
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

    bool sorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    cout << (sorted ? "Sorted" : "Not Sorted");

    return 0;
}
