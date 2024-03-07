#include <iostream>
using namespace std;
void display(int a,int arr[])
{
    int i;
    for(i=0;i<a-1;i++)//a-1 bcoz i+1 when reach i<a we take value from i+1 to avoid it we write i<a-1
    {
        cout<<arr[i];
        if(i!=a-1)
        {
            cout<<",";
        }
    }
}
void dele(int a,int arr[],int&pos)
{
    int i;
    for(i=pos;i<a;i++)
    {
      arr[i]=arr[i+1];
    }
    a--;
    //pos--;
}
int main() {
  int i,n,pos=0,s=0;
  cout<<"enter length";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
      cout<<"enter"<<i+1<<"number";
      cin>>arr[i];
  }
  cout<<"no of positon to delete";
  cin>>s;
  s--;
  for(i=0;i<n;i++)
  {
   if(i==s)
   {
       dele(n,arr,i);
   }
   }
   display(n,arr);
}