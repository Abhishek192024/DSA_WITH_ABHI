// Question:
// Find whether any pair of elements in the array has a sum
// equal to the given target. Print the pair if found.
//
// Example:
// Input:  4
//         2 7 11 15
//         Target = 9
// Output: Pair = 2 7
//
// Hint: Check every pair using two loops.
// Time: O(n^2), Space: O(n)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair = " << arr[i] << " " << arr[j];
                found = true;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        cout << "No pair";

    return 0;
}
