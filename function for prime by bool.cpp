#include <iostream>
using namespace std;
bool check(int&a)
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
    int n,s;
    cout<<"no:";
    cin>>n;
    s=check(n);
    if(s==true)
    {
        cout<<"prime";
        
    }
    else if(s==false)
    {
        cout<<"no prime";
    }
    return 0;
}