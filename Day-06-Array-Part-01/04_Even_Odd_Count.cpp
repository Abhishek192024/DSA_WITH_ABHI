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

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i<= n-1; i++){
        cin >> arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    cout << "Even = " << evenCount << endl;
    cout << "Odd = " << oddCount << endl;

    return 0;
}