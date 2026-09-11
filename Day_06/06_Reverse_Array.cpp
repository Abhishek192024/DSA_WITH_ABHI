// Question:
// Write a C++ program to reverse an array in-place.
//
// Example:
// Input:  5
//         1 2 3 4 5
// Output: 5 4 3 2 1
//
// Hint: Use two indices: start and end.
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

    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
