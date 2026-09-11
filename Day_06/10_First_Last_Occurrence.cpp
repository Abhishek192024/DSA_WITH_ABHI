// Question:
// Find the first and last index of a given element in an array.
//
// Example:
// Input:  5
//         1 3 2 3 4
//         3
// Output: First = 1
//         Last = 3
//
// Hint: Set first only once and keep updating last.
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

    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            if (first == -1)
                first = i;

            last = i;
        }
    }

    cout << "First = " << first << endl;
    cout << "Last = " << last;

    return 0;
}
