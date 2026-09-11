// Question:
// Write a C++ program to take n elements as input in an array
// and print all the elements in the same order.
//
// Example:
// Input:  5
//         10 20 30 40 50
// Output: 10 20 30 40 50
//
// Hint: Use one loop for input and another for output.
// Time: O(n), Space: O(n)


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];

    for( int i = 0; i <= n-1; i++){
        cin >> arr[i];
    }

    for ( int i = 0; i <= n-1; i++){
        cout << arr[i] <<" ";
    }

    return 0;
    
}