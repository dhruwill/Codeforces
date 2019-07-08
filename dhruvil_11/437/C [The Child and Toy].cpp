#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
using namespace std;
/*vector< int > v[1001];
//vis[1001];
void dfs(int s,int m)
{
    vis[s]=true;
    for(int i=0;i<v[s].size();i++)
    {
        if(!vis[v[s][i]])
        {
            m++;
            dfs(v[s][i],m);
        }
    }
    return m;
}*/
int main()
{
    IOS
    int n,m1;
    cin>>n>>m1;
    map<int,ll>m;
    for(int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        m[i]=a;
    }
    ll ans=0;
    while(m1--)
    {
        int a,b;
        cin>>a>>b;
        ans+=min(m[a],m[b]);
    }
    cout<<ans;
}