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
int n,m,k;
char c[1001][1001];
vector< pair < int, int> >v[1001][1001];
int ans[1001][1001]={0};
bool vis[1001][1001];
void dfs(pair< int,int >p,pair <int,int >q)
{
	vis[p.first][p.second]=true;
	v[p.first][p.second].pb(q);
	if(p.first+1<=n && c[p.first+1][p.second]=='*')
		ans[q.first][q.second]++;
	if(p.first-1>=1 && c[p.first-1][p.second]=='*')
		ans[q.first][q.second]++;
	if(p.second+1<=m && c[p.first][p.second+1]=='*')
		ans[q.first][q.second]++;
	if(p.second-1>=1 && c[p.first][p.second-1]=='*')
		ans[q.first][q.second]++;
	if(p.first+1<=n && c[p.first+1][p.second]=='.' && !vis[p.first+1][p.second])
		dfs({p.first+1,p.second},q);
	if(p.first-1>=1 && c[p.first-1][p.second]=='.' && !vis[p.first-1][p.second])
		dfs({p.first-1,p.second},q);
	if(p.second+1<=m && c[p.first][p.second+1]=='.' && !vis[p.first][p.second+1])
		dfs({p.first,p.second+1},q);
	if(p.second-1>=1 && c[p.first][p.second-1]=='.' && !vis[p.first][p.second-1])
		dfs({p.first,p.second-1},q);
	//cout<<p.first<<" "<<p.second<<c[p.first][p.second+1]<<" "<<m1[{p.first,p.second+1}]<<"\n";

}
int main()
{
	IOS
	//n==1
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>c[i][j];
	for(int i=1;i<=k;i++)
	{
		int x,y;
		cin>>x>>y;
		if(vis[x][y])
			cout<<ans[v[x][y][0].first][v[x][y][0].second]<<endl;
		else
		{
			dfs({x,y},{x,y});
			cout<<ans[x][y]<<endl;
		}

	}
}