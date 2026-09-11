// Question:
// Given a sorted array, remove duplicate elements in-place.
// Print only the unique elements and their count.
//
// Example:
// Input:  7
//         1 1 2 2 3 4 4
// Output: 1 2 3 4
//         Unique Count = 4
//
// Hint: Use two indices: one for unique values and one for scanning.
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

    if (n == 0)
        return 0;

    int unique = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[unique - 1]) {
            arr[unique] = arr[i];
            unique++;
        }
    }

    for (int i = 0; i < unique; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Unique Count = " << unique;

    return 0;
}
