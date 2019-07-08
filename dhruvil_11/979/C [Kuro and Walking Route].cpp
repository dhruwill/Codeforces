#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define eb emplace_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define endl "\n"
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
vector<int>v[300001];
bool vis[300001];
int n,x,y;
int par[300001];
ll c1=0,c2=0;
void init()
{
	for(int i=1;i<=300001;i++)
		vis[i]=false;
}
void dfs(int s,int p)
{
	par[s]=p;
	vis[s]=true;
	c1++;
	for(int i=0;i<v[s].size();i++)
		if(!vis[v[s][i]])
			dfs(v[s][i],s);
}
int main()
{
	IOS
	//n==1
	
	cin>>n>>x>>y;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	dfs(x,0);
	init();
	c1=0;
	vis[par[y]]=true;
	//cout<<par[y]<<endl;
	dfs(y,0);
	ll z = c1;
	//cout<<c1<<endl;
	init();
	c1=0;
	dfs(y,0);
	init();
	c1=0;
	vis[par[x]]=true;
	//cout<<par[x]<<endl;
	dfs(x,0);
	ll y= c1;
	//cout<<c1<<endl;
	ll k  = n-z-y;
	ll ans=(y*(n-1));
	ans+=(k*(n-1));
	ans+=(z*(n-y-1));
	cout<<ans;



}