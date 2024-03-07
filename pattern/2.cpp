//*
//**
//***
//****
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"no ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
         cout<<"*";
         
        }
        cout<<"\n";
    }

    return 0;
}