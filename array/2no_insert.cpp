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
void insert(int&a,int arr[],int&pos,int&s)
{
    for(int i=a;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=s;
    a++;
}
int main()
{
    int i,n,pos,s;
    cout << "enter length";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter" << i + 1 << "number";
        cin >> arr[i];
    }
    for(i=1;i<=2;i++)
    {
        cout<<"no:";
        cin>>s;
        cout<<"pos:";
        cin>>pos;
        insert(n,arr,pos,s);
        
        cout<<"\n";
    }
    dis(n,arr);
   
}