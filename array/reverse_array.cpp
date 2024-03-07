#include <iostream>
using namespace std;
void dis(int&a,int arr[])
{
    for(int i=0;i<a;i++)
    {
        cout<<arr[i];
        if(i!=a-1)
        {
            cout<<",";
        }
    }
}
int main()
{
    int i,n,pos=0;
    cout << "enter length";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter" << i + 1 << "number";
        cin >> arr[i];
    }
    pos=0;
    for(i=n-1;i>n/2;i--)
    {
        swap(arr[i],arr[pos]);
        pos++;
    }
    dis(n,arr);
}