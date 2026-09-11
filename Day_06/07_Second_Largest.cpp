// Question:
// Find the second largest DISTINCT element in an array
// without sorting the array.
//
// Example:
// Input:  5
//         10 5 8 10 3
// Output: 8
//
// Hint: Track the largest and second largest values.
// Time: O(n), Space: O(n)

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "No distinct second largest";
    else
        cout << secondLargest;

    return 0;
}
