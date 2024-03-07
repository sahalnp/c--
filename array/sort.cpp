#include <iostream>
using namespace std;
void dis(int a, int arr[])
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
int main()
{
    int i, n, j;
    cout << "enter length";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter" << i + 1 << "number";
        cin >> arr[i];
    }
    for (i = 0; i < n-1; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                
            }
        }
    }
    dis(n,arr);
}