#include <iostream>
using namespace std;
bool check(int a)
{
    int fact=0,i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            fact=fact+1;
        }
    
    }
    if(fact>2)
    {
        return false;
    }
    else{
        return true;
    }
}
int main() {
  int i,n;
  bool s;
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
       s=check(arr[i]);
       if(s==true)
       {
           arr[i]=0;
       }
  }
  for(i=0;i<n;i++)
  {
     
      cout<<arr[i];
      if(i!=n-1)
      {
          cout<<",";
      }
      
  }
  return 0;
  }