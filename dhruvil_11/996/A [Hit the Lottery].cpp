#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;ll c=0;
    cin>>n;
    if(n/100>=1)
    {
     c+=n/100;
     n%=100;
     
    }
    if(n/20>=1)
    {
        c+=n/20;
        n%=20;
    }
    if(n/10>=1)
    {
        c+=n/10;
        n%=10;
    }
    if(n/5>=1)
    {
        c+=n/5;
        n%=5;
    }
    if(n>0)
    {
      c+=n;
      n=0;
    }
    cout<<c;
}