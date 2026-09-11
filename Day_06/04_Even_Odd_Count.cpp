// Question:
// Write a C++ program to count how many even and odd elements
// are present in an array.
//
// Example:
// Input:  5
//         1 2 4 7 8
// Output: Even = 3
//         Odd = 2
//
// Hint: Check each element using % 2.
// Time: O(n), Space: O(n)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}
