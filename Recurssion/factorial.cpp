#include <bits/stdc++.h>
using namespace std;

int getfactorial(int n)
{

    if (n <= 1)
    {
        return 1;
    }

    int ans = n * getfactorial(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    cout << "Factorial of " << n << " is: " << getfactorial(n) << endl;

    return 0;
}