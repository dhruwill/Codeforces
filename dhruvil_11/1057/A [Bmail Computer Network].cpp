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
int par[300000];
vector<int>v[300000];
bool vis[300000];
void dfs(int s,int p)
{
	par[s]=p;
	vis[s]=true;
	for(int i=0;i<v[s].size();i++)
	{
		if(!vis[v[s][i]])
		{
			dfs(v[s][i],s);
		}
	}
}
int main()
{
	IOS
	//n==1
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int x;
		cin>>x;
		v[x].pb(i);
	}
	dfs(1,0);
	vector< int>s;
	s.pb(n);
	while(1)
	{
		if(par[n]==0)
			break;
		s.pb(par[n]);
		n=par[n];
	}
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++)
		cout<<s[i]<<" ";
	
}