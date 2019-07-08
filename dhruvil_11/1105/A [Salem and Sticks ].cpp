#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define f first
#define s second
#define p 1000000007
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
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mi=1000000,val;
    for(int j=1;j<=1001;j++)
    {
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(abs(a[i]-j)>1)
            {
                if(j<a[i])
                ans+=abs(j+1-a[i]);
                else
                ans+=abs(j-1-a[i]);
                //if(j==3)
                //cout<<ans<<" ";
            }
        }
        if(mi>ans)
        {
            mi=ans;
            val=j;
        }
        
    }
    cout<<val<<" "<<mi;
    
}