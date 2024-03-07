#include <iostream>
using namespace std;

int main()
{
    int i, n, del;
    cout << "enter length";
    cin >> n;
    int arr1[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter" << i + 1 << "number";
        cin >> arr1[i];
    }
    cout << "no to delete:";
    cin >> del;
    for (i = 0; i < n; i++)
    {
        if (arr1[i] == del)
        {
            arr1[i] = arr1[n + 1];
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        cout << arr1[i];
    }
}