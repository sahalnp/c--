#include <iostream>
using namespace std;
void display(int&a,int arr[])
{
    int i;
    for(i=0;i<a;i++)
    {
        cout<<arr[i];
    }
}
int main() {
  int i,n,s=0,pos=0;
  cout<<"enter length";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
      cout<<"enter"<<i+1<<"number";
      cin>>arr[i];
   }
  for(i=0;i<n;i++)
  {
     if(arr[i]==0)
     {
         s=arr[i];
         arr[i]=arr[pos];
         arr[pos]=s;
         pos=pos+1;
     }
     
  }
   display(n,arr);
}