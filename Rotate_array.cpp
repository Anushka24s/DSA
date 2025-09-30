#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    int n;
    n = arr.size();
    vector<int> rotated(n);

    for (int i = 0; i < n; i++)
    {
        rotated[i] = arr[(i + k) % n];
    }
    arr = rotated;
    return arr;
}