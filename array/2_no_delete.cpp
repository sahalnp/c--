#include <iostream>
using namespace std;
void display(int a, int arr[]) {
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
}
void del(int&a,int arr[],int&pos)
{
    int i;
    for(i=pos;i<a;i++)
    {
        arr[i]=arr[i+1];
       
    }
    a--;
}
int main() {
    int n,i,dele=0,dele2;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    for ( i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout<<"delete";
    cin>>dele;
    cout<<"delete";
    cin>>dele2;
    for(i=0;i<n;i++)
    {
        if(arr[i]==dele||arr[i]==dele2)
        {
              del(n,arr,i);
        }
    }
  
    display(n,arr);
}