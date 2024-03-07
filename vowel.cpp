#include <iostream>
#include <string>
using namespace std;
int main() {
    int count=0,i;
    char a[30];
    cout<<"enter string:";
    cin.getline(a,30);
    for(i=0;a[i]!='\0';i++)
    {
         if(a[i]=='a'|a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
         {
            count=count+1;
         }
    }
    cout<<count<<" vowel";
    return 0;
}