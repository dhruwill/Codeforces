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
bool vis[100][100];
int main()
{
	int n;
	cin>>n;
	int r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	char a[n+1][n+1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	//ll ans=0;
	vis[r1][c1]=true;
	queue< int>q,q1;
	q.push(r1);
	q1.push(c1);
	vector< pair < int,int> >v,v1;
	while(!q.empty())
	{
		int p = q.front();
		q.pop();
		
		int x=q1.front();
		q1.pop();
		v.pb({p,x});
		if(p+1<=n && !vis[p+1][x] && a[p+1][x]=='0')
		{
			q.push(p+1);
			q1.push(x);
			vis[p+1][x]=true;
		}
		if(x+1<=n && !vis[p][x+1] && a[p][x+1]=='0')
		{
			q.push(p);
			q1.push(x+1);
			vis[p][x+1]=true;
		}
		if(x-1>=0 && !vis[p][x-1] && a[p][x-1]=='0')
		{
			q.push(p);
			q1.push(x-1);
			vis[p][x-1]=true;
		}
		if(p-1>=0 && !vis[p-1][x] && a[p-1][x]=='0')
		{
			q.push(p-1);
			q1.push(x);
			vis[p-1][x]=true;
		}
	}
	if(vis[r2][c2])
	{
		cout<<0;
		return 0;
	}
	int ans =1000000;
	vis[r2][c2]=true;
	queue< int>q2,q3;
	q2.push(r2);
	q3.push(c2);
	//vector< pair < int,int> > >v,v1;
	while(!q2.empty())
	{
		int p = q2.front();
		int x=q3.front();
		q2.pop();
		q3.pop();
		v1.pb({p,x});
		if(p+1<=n && !vis[p+1][x] && a[p+1][x]=='0')
		{
			q2.push(p+1);
			q3.push(x);
			vis[p+1][x]=true;
		}
		if(x+1<=n && !vis[p][x+1] && a[p][x+1]=='0')
		{
			q2.push(p);
			q3.push(x+1);
			vis[p][x+1]=true;
		}
		if(x-1>=0 && !vis[p][x-1] && a[p][x-1]=='0')
		{
			q2.push(p);
			q3.push(x-1);
			vis[p][x-1]=true;
		}
		if(p-1>=0 && !vis[p-1][x] && a[p-1][x]=='0')
		{
			q2.push(p-1);
			q3.push(x);
			vis[p-1][x]=true;
		}
	}
	/*for(int i=0;i<v.size();i++)
		cout<<v[i].first<<" "<<v[i].second<<endl;
	for(int i=0;i<v1.size();i++)
		cout<<v1[i].first<<" "<<v1[i].second<<endl;*/
	for(int i=0;i<(int)v.size();i++)
	{

		for(int j=0;j<(int)v1.size();j++)
		{
			int cc=pow(v[i].first-v1[j].first,2)+pow(v[i].second-v1[j].second,2);
			//cout<<pow(v[i].first-v[j].first,2)<<" "<<pow(v[i].second-v[j].second,2)<<endl;
			ans=min(ans,cc);
		}
	}
	cout<<ans;
}	