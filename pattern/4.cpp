// *
 // *
  // *
 //   *
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"no ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i)
            {
                cout<<"*";
            }
            else
             cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}