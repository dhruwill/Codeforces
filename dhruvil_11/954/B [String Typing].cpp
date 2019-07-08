#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;int i,j=0;
    for(i=n/2-1;i>=0;i--)
    {
       
        if(s.substr(0,i+1)==s.substr(i+1,i+1))
        {
           j=i;//cout<<j<<endl;
           break; 
        }
    }
    cout<<j+2+n-(2*(j+1));
}