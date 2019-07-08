#pragma GCC optimize ("-Ofast")
#include<bits/stdc++.h>
using namespace std;
#define testcase(t) int t;cin>>t;while(t--)
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
bool vis[1001][1001];
int main()
{
	IOS
	//n==1
	

	int w,h;
	cin>>w>>h;
	char c[w][h];
	for(int i=0;i<w;i++)
		for(int j=0;j<h;j++)
			cin>>c[i][j];
	int m=0,ind=-1;
	for(int i=0;i<w;i++)
	{
		int x =0;
		for(int j=0;j<h;j++)
		{
			if(c[i][j]=='*')
			{
				for(int k = j;k<h;k++)
					{
						if(c[i][k]=='*')
							x++;
						else break;
					}
					break;
			}
		}
		if(m<x)
		{
			m=x;
			ind = i;
		}
	}
	if(ind==-1)
	{
		cout<<"no";
		return 0;
	}
	int flag=0;
	int flag2=0;
	for(int j=0;j<h;j++)
	{
		if(c[ind][j]=='*')
		{
				for(int k = j;m;k++)
				{
					m--;
					vis[ind][k]=true;
					if(flag2==0 && ind+1<=w-1 && ind-1>=0 && k-1>=0 && k+1<=h-1 && c[ind][k-1]=='*'&& c[ind][k+1]=='*'&& c[ind+1][k]=='*' && c[ind-1][k]=='*' )
					{
						flag2=1;
						for(int l = ind-1;l>=0;l--)
						{
							
							if(c[l][k]=='*')
								vis[l][k]=true;
							else
								break;
						}
						for(int l = ind+1;l<=w+1;l++)
						{
							if(c[l][k]=='*')
								vis[l][k]=true;
							else
								break;
						}

					}
				}
		}
	}
	if(!flag2)
	{
		cout<<"no";
		return 0;
	}
	for(int i=0;i<w;i++)
		for(int j=0;j<h;j++)
			if(c[i][j]=='*' && !vis[i][j])
			{
				cout<<"no";
				return 0;
			}
			cout<<"yes";
}