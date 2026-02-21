#include <iostream>
using namespace std;

void get_num(int n, string arr[])

{

    if (n <= 0)
    {
        return;
    }

    int digit = n % 10;

    get_num(n / 10, arr);

    cout << arr[digit] << " ";
}

int main()
{
    int n;

    string arr1[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    cout << "Enter a Number" << endl;

    cin >> n;

    get_num(n, arr1);

    return 0;
}
