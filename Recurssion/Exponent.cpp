
#include <iostream>
using namespace std;

// T(y) = T(y-1) + O(1) {recurssion pattern}
// T(y) = O(y) {time complexity}

/*n^y = (n^(y/2))² -----this is Fast Exponentiation makes the time complexity O(log y)

int expo(int n, int y)
{
    if(y == 0) return 1;

    int half = expo(n, y/2);

    if(y % 2 == 0)
        return half * half;
    else
        return n * half * half;
}


*/
int expo(int n, int y)
{

    if (y == 0)
    {
        return 1;
    }

    return n * expo(n, y - 1);
}

int main()
{
    int n;
    int y;

    cout << "enter the base number" << endl;
    cin >> n;
    cout << "Enter the Power" << endl;
    cin >> y;

    cout << "the Ans is " << expo(n, y) << endl;

    return 0;
}