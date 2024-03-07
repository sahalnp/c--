#include <iostream>
using namespace std;
void display(int &a, int arr[])
{
    int i;
    for (i = 0; i < a; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int i, n, sum = 0, s = 0, avg = 0;
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
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
            s = s + 1;
        }
    }
    avg = sum / s;
    cout << avg;
    // display(n,arr);
}