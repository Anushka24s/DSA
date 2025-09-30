#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    vector<int> arr3(m + n);
    int j = 0, i = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }

        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < m)
    {

        arr3[k++] = arr1[i++];
    }

    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }

    return arr3;
}