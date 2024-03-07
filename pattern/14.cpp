//*****
 // *  
 // *  
//  *  
//*** 
#include <iostream>
using namespace std;
int main() {
    int j,i,n,s;
    cout<<"no ";
    cin>>n;
    s=n+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
                if((i==1)||(j==s/2)||(i==n&&j<=s/2))
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