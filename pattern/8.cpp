// ****
 // *  
//   * 
// ****
#include <iostream>
using namespace std;
int main() {
    int n,i,s=0;
    cout<<"no ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||j==i||i==n)
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