#include <iostream>
using namespace std;

int fibonaci_term(int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }

    int ans = fibonaci_term(n - 1) + fibonaci_term(n - 2);

    return ans;
}

int main()
{
    int n;

    cout << "enter the term" << endl;
    cin >> n;

    cout << "the value is" << " " << fibonaci_term(n) << endl;

    return 0;
}