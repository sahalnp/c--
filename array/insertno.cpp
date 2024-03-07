#include <iostream>
using namespace std;
void dis(int &a, int arr[])
{
    for (int i = 0; i <= a; i++)
    {
        cout << arr[i];
        if (i != a)
        {
            cout << ",";
        }
    }
}
void insert(int &a, int arr[], int &pos)
{
    for (int i = a; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
}
int main()
{
    int i, n, pos, s;
    cout << "enter length";
    cin >> n;
    int arr[n + 1];
    for (i = 0; i < n; i++)
    {
        cout << "enter" << i + 1 << "number";
        cin >> arr[i];
    }
    cout << "insert:";
    cin >> s;
    cout << "pos:";
    cin >> pos;
    insert(n, arr, pos);
    arr[pos] = s;
    dis(n, arr);
}