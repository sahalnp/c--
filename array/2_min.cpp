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
  int i,n,min=50,secmin=0;
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
      if(arr[i]<min&&arr[i]>secmin)
      {
          secmin=min;
          min=arr[i];
      }
      else if(arr[i]<secmin)
      {
          secmin=arr[i];
      }
  }
  cout<<"sec:"<<secmin;
  }