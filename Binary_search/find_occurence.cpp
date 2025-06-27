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

    int found1 = firstOcurrence(check, 6, 3);
    int found2 = lastOcurrence(check, 6, 3);

    cout << "the first occurene is" << found1 << endl;
    cout << "the last occurence is" << found2 << endl;

    return 0;
}
