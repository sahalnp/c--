//*********
 //******* 
 // *****  
 //  ***   
 //   *    
#include <iostream>
using namespace std;
int main()
{
    int i, n,j,s;
    cout << "enter length";
    cin >> n;
    s=2*n-1;
    for (i = 1; i<=n; i++)
    {
        for(j=1;j<=s;j++)
        {
            if(j>=i&&j<=s-i+1)
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
}