// Question:
// Count how many times a given key occurs in an array.
//
// Example:
// Input:  5
//         2 3 2 2 5
//         2
// Output: 3
//
// Hint: Increase the count whenever arr[i] == key.
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

    int key;
    cin >> key;

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }

    cout << count;

    return 0;
}
