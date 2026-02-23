#include <iostream>
using namespace std;

// T(n) = T(n-1) + O(1) {recurssion pattern}
// T(n) = O(n) {time complexity}
// This is a simple recursive function to check if an array is sorted in non-decreasing order.
// The function takes an array and its size as input and returns true if the array is sorted, otherwise false.
// The base case is when the size of the array is 0 or 1, in which case the array is considered sorted.
// space complexity is O(n) due to the recursive call stack, but it can be optimized to O(1) by using an iterative approach or tail recursion optimization.

bool isSorted(int arr[], int n)
{
    // Base case
    if (n == 0 || n == 1)
        return true;

    // If last two elements are not sorted
    if (arr[n - 1] < arr[n - 2])
        return false;

    // Check remaining array
    return isSorted(arr, n - 1);
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (isSorted(arr, n))
        cout << "Sorted";
    else
        cout << "Unsorted";

    return 0;
}