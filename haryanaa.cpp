// C++ program to find sum between two indexes
// when there is no update.
#include <bits/stdc++.h>
using namespace std;

// Function to compute sum in given range
int rangeSum(int arr[], int n, int i, int j) {
    int sum = 0;

    // Compute sum from i to j
    for (int k = i; k <= j; k++) {
        sum += arr[k];
    }

    return sum;
}

// Driver code
int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call with queries
    cout << rangeSum(arr, n, 1, 3) << endl;
    cout << rangeSum(arr, n, 2, 4) << endl;

    return 0;
}
