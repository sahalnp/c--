#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0, avg;
    cout << "enter length";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter" << i + 1 << "number";
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > n)
        {
            arr[i] = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / n;
    cout << avg;

    return 0;
}