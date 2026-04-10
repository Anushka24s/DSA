#include <bits/stdc++.h>
using namespace std;

int totalSubset = 0;

// index -> ith index of input array
// subset: array to store the subset
// auto i : to print the subset
// auto is used to print the subset because we don't know the size of the subset, it can be from 0 to n, so we use auto to print the subset
// time complexity is O(2^n) because we are calling 2 recursive calls for each n
// space complexity is O(n) because we are using recursion and the maximum depth of the recursion is n
void printSubset(const vector<int> &input, vector<int> &output, int index)
{
    // if saare elements traverse ho chuke hai
    if (index >= input.size())
    {
        // print the output array
        for (auto i : output)
        {
            cout << i << " ";
        }
        cout << endl;
        totalSubset++;
        return;
    }
    // nahi lena hai
    printSubset(input, output, index + 1);
    // lena hai
    output.push_back(input[index]);
    printSubset(input, output, index + 1);
}

int main()
{
    cout << "Enter size " << endl;
    int size;
    cin >> size;
    vector<int> vec(size);
    vector<int> subset; // to store subset, 2^n
    cout << "Enter elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    cout << "Power Set is as follows : " << endl;
    printSubset(vec, subset, 0);
    cout << "Total Number of Subsets is " << totalSubset << endl;
    // should be 2^n
    return 0;
}