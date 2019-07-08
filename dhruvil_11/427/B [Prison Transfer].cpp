#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    ll n,t,c;
    cin>>n>>t>>c;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll tot=0,x=0,g=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<=t)
        x++;
        else
        {
            if(x<c)
            x=0;
            else
            {
                tot+=x-c+1;x=0;
            }
            g=1;
        }
    }if(g){if(x>=c)tot+=x-c+1;
    cout<<tot;}
    else
    cout<<x-c+1;
}