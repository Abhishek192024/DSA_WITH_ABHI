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
// Time: O(n), Space: O(1)

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    cout << "Largest = " << largest << " " <<endl;
    cout << "Second Largest = " <<secondLargest <<" " <<endl;

    return 0;
}

// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     int largest = INT_MIN; 
//     for (int i = 0; i < n; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     cout << "Largest Number = " << largest <<" " <<endl;
//     return 0;
// }