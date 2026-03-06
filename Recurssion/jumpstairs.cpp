#include <iostream>;
using namespace std;

// time complexity is O(3^n) because we are calling 3 recursive calls for each n

int jump_stairs(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return 1;
    }

    if (n < 0)
    {
        return 0;
    }
    // recursive case
    return jump_stairs(n - 1) + jump_stairs(n - 2) + jump_stairs(n - 3);
}

int main()
{
    int n;
    cout << "Enter the number of stairs : " << endl;
    cin >> n;
    cout << "Total number of ways to jump stairs is : " << jump_stairs(n) << endl;
    return 0;
}