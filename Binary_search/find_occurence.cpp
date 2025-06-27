#include <iostream>
using namespace std;

int firstOcurrence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOcurrence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int check[6] = {1, 2, 3, 3, 3, 4};

    int first = firstOcurrence(check, 6, 3);
    int last = lastOcurrence(check, 6, 3);

    if (first == -1 || last == -1)
    {
        cout << "Key not found" << endl;
    }
    else
    {
        int count = (last - first) + 1;
        cout << "The first occurrence is at index: " << first << endl;
        cout << "The last occurrence is at index: " << last << endl;
        cout << "The count of occurrences is: " << count << endl;
    }

    //     The first occurrence is at index: 2
    //     The last occurrence is at index: 4
    //     The count of occurrences is: 3  {(4-2)+1}

    return 0;
}
