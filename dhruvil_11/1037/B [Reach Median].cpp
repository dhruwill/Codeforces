#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    //n==1
    ll n,x;
    cin>>n>>x;
    ll a[n];
    ll s=0;
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(a[n/2]==x)
    {
        cout<<0;
        return 0;
    }
    else if(a[n/2]>x)
    {
        for(ll i=0;i<=n/2;i++)
        {
            if(a[i]>x)
            s+=abs(a[i]-x);
            
        }
        cout<<s;
        return 0;
    }
    else if(a[n/2]<x)
    {
        for(ll i=n/2;i<n;i++)
        {
            if(a[i]<x)
            s+=abs(a[i]-x);
            else
            break;
        }
        cout<<s;
        return 0;
    }
    
}