#include <iostream>
using namespace std;
int findMin(int arr[], int n)
{
    int minElement = arr[0]; // Initialize minElement with the first element
    int maxElement = arr[0]; // Initialize maxElement with the first element

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i]; // Update minElement if a smaller element is found
        }
        if (arr[i] > maxElement)
        {
            maxElement = arr[i]; // Update maxElement if a larger element is found
        }
    }

    return minElement; // Return the smallest element found
    return maxElement; // Return the largest element found
}