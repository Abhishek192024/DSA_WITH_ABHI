// Question:
// Write a C++ program to search for a given key in an array.
// Print its first index if found, otherwise print -1.
//
// Example:
// Input:  5
//         10 20 30 40 50
//         30
// Output: 2
//
// Hint: Traverse from left to right and stop at the first match.
// Time: O(n), Space: O(n)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Array Number" <<endl;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key ;
    cout << "Enter Your Key" << endl;;
    cin >> key;

    int index = -1;

    for (int i = 0; i < n; i++){
        if(arr[i] == key){
            index = i;
            break;
        }
    }
    cout << index;
    
    return 0;
}