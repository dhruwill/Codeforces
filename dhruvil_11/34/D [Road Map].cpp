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
vector<int>v[100005];
bool vis[100005];
int par[100005];
void dfs(int s,int p)
{
	vis[s]=true;
	par[s]=p;
	for(int i=0;i<v[s].size();i++)
	{
		if(!vis[v[s][i]])
			dfs(v[s][i],s);
	}
}
int main()
{
	IOS
	//n==1
	int n,r1,r2;
	cin>>n>>r1>>r2;
	//int p[n];
	int c=1;
	for(int i=1;i<=n-1;i++)
		{
			if(c==r1)
				c++;
			int x;
			cin>>x;
			v[x].pb(c);
			v[c].pb(x);
			c++;
		}
	dfs(r2,0);
	for(int i=1;i<=n;i++)
		if(i!=r2)
			cout<<par[i]<<" ";


}