//  Binary Search Approach to Find Pivot

#include <iostream>
using namespace std;

int findPivot(int arr[], int n)
{
    int s = 0, e = n - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0])
        {
            // Pivot is in the right part
            s = mid + 1;
        }
        else
        {
            // Pivot is in the left part (including mid)
            e = mid;
        }
    }

    // 's' will point to the pivot (smallest element)
    return s;
}