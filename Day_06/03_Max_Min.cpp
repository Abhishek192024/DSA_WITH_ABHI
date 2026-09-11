// Question:
// Write a C++ program to find the maximum and minimum element
// present in an array.
//
// Example:
// Input:  5
//         7 2 9 4 6
// Output: Maximum = 9
//         Minimum = 2
//
// Hint: Initialize max and min with arr[0].
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

    int maxi = arr[0];
    int mini = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi)
            maxi = arr[i];

        if (arr[i] < mini)
            mini = arr[i];
    }

    cout << "Maximum = " << maxi << endl;
    cout << "Minimum = " << mini;

    return 0;
}
