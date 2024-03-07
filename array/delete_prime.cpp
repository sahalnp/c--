#include <iostream>
using namespace std;
void dis(int &a, int arr[])
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i];
        if (i != a - 1)
        {
            cout << ",";
        }
    }
}
void dele(int &a, int arr[])
{
    for (int i = 0; i < a; i++)
    {
        arr[i] = arr[i + 1];
    }
    a--;
}
bool prime(int &a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int i, n, s;
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
        s = prime(arr[i]);
        if (s == true)
        {
            dele(n, arr);
        }
    }
    dis(n, arr);
}