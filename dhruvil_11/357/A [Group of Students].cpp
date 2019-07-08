#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS
    ll n;
    cin>>n;
    ll a[n+1],b[n+1];
    ll i;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==1)
        b[1]=a[1];
        if(i>1)
        b[i]=b[i-1]+a[i];
    }
    ll x,y;
    cin>>x>>y;
    i=0;ll j=0;
    for(i=1;i<=n;i++)
    {
       if((b[i]>=x && b[i]<=y) && (b[n]-b[i]>=x && b[n]-b[i]<=y))
      
     j=i;
        
        
    }
    if(j==0)
    cout<<0;
    else
    cout<<j+1;
    /*for(ll j=i+1;j<=n;j++)
    {
        in+=a[j];
    }
    if(b>=x && b<=y)
    {if(in>=x && in<=y)
    cout<<i+1;
    else
    cout<<0;}
    else
    cout<<0;*/
}
    
    
    