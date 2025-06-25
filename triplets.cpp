#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

// brute force

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    set<vector<int>> visited;
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int r = j + 1; r < n; r++)
            {
                if (arr[i] + arr[j] + arr[r] == K)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[r]);

                    sort(temp.begin(), temp.end());
                    if (visited.find(temp) == visited.end())
                    {
                        ans.push_back(temp);
                        visited.insert(temp);
                    }
                }
            }
        }
    }

    return ans;
}