//    *
//   **
//  ***
// ****
//*****
// ****
 // ***
  // **
 //   *
//*    
//**   
//***  
//**** 
//*****
//**** 
//***  
//**   
//*    
#include <iostream>
using namespace std;
int main()
{
    int i, n,j,s;
    cout << "enter length";
    cin >> n;
    s=2*n-1;
    for (i = 1;i<=s;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i-n+1&&i>=n||j>=n-i+1&&i<n)
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