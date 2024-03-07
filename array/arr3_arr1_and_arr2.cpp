#include <iostream>
using namespace std;
void dis(int a,int arr[])
{
    int i;
    for(i=0;i<a;i++)
    {
        cout<<arr[i];
        if(i!=a-1)
        {
            cout<<",";
        }
    }
}
int main() {
    int i,n,m,s,pos=0;
    cout<<"no: ";
    cin>>n;
    int arr1[n];
    for(i=0;i<n;i++)
    {
        cout<<"no"<<i+1<<":";
        cin>>arr1[i];
    }
    cout<<"arr2 no: ";
    cin>>m;
    int arr2[m];
    for(i=0;i<m;i++)
    {
        cout<<"no"<<i+1<<":";
        cin>>arr2[i];
        
    }
    s=n+m;
    int arr3[s];
    for(i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    
    for(i=n;i<s;i++)
    {
       arr3[i]=arr2[pos];
       pos++;
    }
    
    dis(s,arr3);
    return 0;
}