#include <iostream>
using namespace std;

int main()
{
    int n, i, res = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        res = res + (i * i);
    }

    cout << "The sum of the squares of natural numbers up to " << n << " is: " << res << endl;

    return 0;
}
