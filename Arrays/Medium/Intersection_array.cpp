#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

vector<int> findArrayIntersection(vector<int> arr1, vector<int> arr2, int n, int m)
{
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
}