// *  *
 // ** 
 // * 
 //* 
#include <iostream>
using namespace std;
int main() {
    int j,i,n;
    cout<<"no ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
                if((j==n-i+1)||(j==i)&&(i<=n/2))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
        }
        cout<<"\n";
    }
    return 0;
}
// *   

