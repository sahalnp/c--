#include <iostream>
using namespace std;
void display(int a,int arr[])
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
  int i,n,pos=0,s=0;
  cout<<"enter length";
  cin>>n;
  int arr1[n];
  for(i=0;i<n;i++)
  {
      cout<<"enter"<<i+1<<"number";
      cin>>arr1[i];
   }
   int even[n];
   int odd[n];
  for(i=0;i<n;i++)
  {
     if(arr1[i]%2==0)
     {
         even[pos]=arr1[i];
         pos++;
     }
     else
     {
         odd[s]=arr1[i];
         s++;
     }
  }
  cout<<"even array";
  display(pos,even);
  cout<<"\nodd array";
  display(s,odd);
}