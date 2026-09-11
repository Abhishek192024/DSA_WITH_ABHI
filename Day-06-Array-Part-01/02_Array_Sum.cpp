// Question:
// Write a C++ program to find the sum of all elements in an array.
//
// Example:
// Input:  5
//         1 2 3 4 5
// Output: 15
//
// Hint: Keep a variable 'sum' and add each element to it.
// Time: O(n), Space: O(n)

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for(int i=0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}