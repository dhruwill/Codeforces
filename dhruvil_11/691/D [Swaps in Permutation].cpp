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
vector< int >v[1000001];
bool vis[1000001];
int main()
{
	IOS
	//n==1
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	//cout<<"HELP";
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			//cout<<i<<" ";
			int q[1000001],t=0,r=0;
			vis[i]=true;
			q[r++]=i;
			while(t!=r)
			{
				int p = q[t++];
				for(int j=0;j<v[p].size();j++)
					if(!vis[v[p][j]])
					{
						vis[v[p][j]]=true;
						q[r++]=v[p][j];
					}
			}
			sort(q,q+r);
			int b[r];
			for(int j=0;j<r;j++)
				b[j]=a[q[j]];
			sort(b,b+r,greater<int>());
			for(int j=0;j<r;j++)
				a[q[j]]=b[j];
		}
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	
}