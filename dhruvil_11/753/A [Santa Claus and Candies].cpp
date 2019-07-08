#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define f first
#define s second
//#define p 1000000007
using namespace std;
/*vector< int > v[1001];
//bool vis[1001];
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
    int n;
    vector<int>v;
    ll ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       if(ans+i<=n)
       {
           ans+=i;
           v.pb(i);
       }
    }
    if(ans!=n)
    {
        v[v.size()-1]+=n-ans;
    }
    cout<<(int)v.size()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}