//*****
//*   *
//*****
//*    
//*    
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
                if((i==1)||(j==1)||(i==s/2)||(j==n&&i<s/2))
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