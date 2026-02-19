#include <bits/stdc++.h>
using namespace std;

void getcounting(int n)
{
    if (n <= 0)
    {
        return;
    }

    getcounting(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    cout << "Counting from 1 to " << n << " is: " << endl;
    getcounting(n);

    return 0;
}