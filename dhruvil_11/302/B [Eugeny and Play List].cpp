#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,m;
    cin>>n>>m;
    ll c[n],t[n],v[m];
    for(ll i=0;i<n;i++)
    {
        cin>>c[i]>>t[i];
        if(i!=0)
        {
            c[i]=c[i]*t[i]+c[i-1];
        }
        if(i==0)
        c[i]=c[i]*t[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin>>v[i];
        cout<<lower_bound(c,c+n,v[i])-c+1<<endl;
    }
}

