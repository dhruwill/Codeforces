#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    IOS
    //n==1
    int n;
    cin>>n;
    vector< ll > v[n+1];
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            ll x;
            cin>>x;
            v[i].pb(x);
        }
    }
    ll ma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<v[i].size();j++)
            ma=max(v[i][j],ma);
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll cnt=0,flag=1;
        for(int j=0;j<v[i].size();j++)
        {
            cnt=max(cnt,v[i][j]);
        }
        if(cnt==ma)
            continue;
        else
        {
            ans+=(ma-cnt)*v[i].size();
        }

    }
    cout<<ans;
}