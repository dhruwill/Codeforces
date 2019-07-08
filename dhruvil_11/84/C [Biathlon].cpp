#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define f first
#define s second
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
    vector< pair< pair < ll , ll> , ll > >v;
    int n;
    cin>>n;
    //int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb({{a,b},i});
        
    }
    map< ll , ll >m;
    sort(v.begin(),v.end());
    ll j[n];
    for(int i=0;i<n;i++)
    j[i]=v[i].f.f;
    int q;
    cin>>q;
    int ans=0;
    for(int i=0;i<q;i++)
    {
        ll x,y;
        cin>>x>>y;
        ll in = lower_bound(j,j+n,x)-j;
        //cout<<in<<" ";
        if(in==n)
        in--;
        if(!m[v[in].s])
        {
            if((pow(x,2)+pow(y,2)+pow(v[in].f.f,2)-pow(v[in].f.s,2)-(x*(v[in].f.f))-(x*(v[in].f.f)))<=0)
            {m[v[in].s]=i+1;
            ans++;
        // cout<<i<<' ';cout<<pow(x,2)+pow(y,2)+pow(v[in].f.f,2)-(x*(v[in].f.f))-(x*(v[in].f.f))<<endl;
            }
        }
        if(in>0 && !m[v[in-1].s])
        {
            if(pow(x,2)+pow(y,2)+pow(v[in-1].f.f,2)-pow(v[in-1].f.s,2)-2*1ll*x*v[in-1].f.f<=0)
           {m[v[in-1].s]=i+1;ans++;}
        }
        
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++)
    {
        if(!m[i])
        cout<<-1<<" ";
        else
        cout<<m[i]<<" ";
    }

    
    
}