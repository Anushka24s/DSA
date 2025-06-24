// Given an array search for an element.

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n = 10;
    int arr[n] = {12, 23, 5, 56, 78, 4, 1, 0, 33, 88};
    cout << "Enter the element" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "The key exists" << endl;
    }
    else
    {
        cout << "The key doesn't exists" << endl;
    }
}