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
vector< int>v[100001];
bool vis[100001];
int c[100001];
int val[100001];
int ans,ans1;
void init()
{
    for(int i=1;i<=100000;i++)
        vis[i]=false;
        ans=0;ans1=0;
}
//int ans,ans1;
void dfs(int s)
{
    vis[s]=true;
    for(int i=0;i<v[s].size();i++)
    {
        if(!vis[v[s][i]])
        //cout<<s<<" "<<v[s][i]<<" "<<c[s]<<" "<<c[v[s][i]]<<"\n";
        if(!vis[v[s][i]] && c[s]!=c[v[s][i]])
        {
                ans=s;
                ans1=v[s][i];
               // cout<<ans<<"l";
                return;
        }
        else if(!vis[v[s][i]])
            dfs(v[s][i]);
    }
}
int main()
{
    IOS
    //n==1
    int n;
    cin>>n;
    map<int ,int >m;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    for(int i=1;i<=n;i++)
    cin>>c[i];
    vis[1]=true;
    for(int i=0;i<v[1].size();i++)
    {

        dfs(v[1][i]);
    }
   // cout<<ans<<"as";
    if(ans==0)
    {
        cout<<"YES"<<endl;
        cout<<1;
        return 0;
    }else
    {
        int p =ans;
        int q =ans1;
        init();
        vis[p]=true;
                for(int i=0;i<v[p].size();i++)
            dfs(v[p][i]);
        if(ans==0)
        {
            cout<<"YES\n"<<p;
            return 0;
        }
        init();
        vis[q]=true;
        for(int i=0;i<v[q].size();i++)
            dfs(v[q][i]);
        if(ans==0)
        {
            cout<<"YES\n"<<q;
            return 0;
        }

            cout<<"NO";
            return 0;
    } 
}