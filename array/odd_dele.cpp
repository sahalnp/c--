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
void dele(int&a,int arr[],int&pos)
{
    for(int i=pos;i<a-1;i++)
    {
        arr[i]=arr[i+1];
    }
    a--;
    pos--;
}
int main()
{
    int i,n,sum=0;
    cout << "enter length";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter" << i + 1 << "number";
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            dele(n,arr,i);
        }
    }
    dis(n,arr);
}