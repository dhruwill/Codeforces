#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define max 1000000007
int main()
{
    IOS
    ll n,d;
    cin>>n>>d;
    ll a[n];
    ll c=2;
    ll i;
    ll x,y;
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
    for(i=0;i<n;i++)
    {
        x=a[i]-d;
        y=a[i]+d;
        if(abs(x-a[i-1])>=d && i!=0)
        {c++;}
        if(abs(y-a[i+1])>d&& i!=n-1)
       { c++;}
    }
    cout<<c%max;
}
    
    