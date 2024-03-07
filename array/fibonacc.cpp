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
  int i,n;
  cout<<"enter length";
  cin>>n;
  int arr[n];
   arr[0]=0;
   arr[1]=1;
  for(i=2;i<n;i++)
  {
    
     arr[i]=arr[i-1]+arr[i-2];
  }
  display(n,arr);
}