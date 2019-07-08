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
char adj[1000][1000];
int vis[100000];
int main()
{
	IOS
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>adj[i][j];
		}
	}
	for(int i = 1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			int q[1000],t=0,r=0;
			q[r++]=i;
			while(t!=r)
			{
				int p =q[t];
				t++;
				for(int j=1;j<=n;j++)
				{
					if(adj[p][j]=='1' && !vis[j])
					{
						vis[j]=1;
						q[r++]=j;
					}
				}
			}
			sort(q,q+r);
			//for(int j =0;j<r;j++)
			//	cout<<q[j]<<" ";
			//cout<<endl;
			int b[r];
			for(int j=0;j<r;j++)
				b[j]=a[q[j]];
			sort(b,b+r);
			//for(int j=0;j<r;j++)
			//	cout<<b[j]<<" ";
			//cout<<endl;
			for(int j=0;j<r;j++)
				a[q[j]]=b[j];
		}
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";

}
