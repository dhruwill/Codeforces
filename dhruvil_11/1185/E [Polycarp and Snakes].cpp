#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
#define testcase(t) int t;cin>>t;while(t--)
#define pb push_back
#define eb emplace_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define endl "\n"
#define imax INT_MAX
#define imin INT_MIN
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
	IOS
	//n==1
	testcase(t)
	{
		
		int n,m;
		cin>>n>>m;
		char a[n+1][m+1];
		int cc=0;
		vector< pair < int, int >  > v[26];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]>='a' && a[i][j]<='z')
					v[a[i][j]-'a'].pb({i,j});
				else
					cc++;
			}
		}
		if(cc==n*m)
		{
			cout<<"YES"<<endl<<0<<endl;
			continue;
		}
		int fbends=0;
		int ma=0;
		for(int i=0;i<26;i++)
		{
			if(v[i].size()>0)
				{ma=i;}
			if((int)v[i].size()>1)
			{
				int cc=0;

				for(int j=1;j<v[i].size();j++)
					if(v[i][j].second!=v[i][0].second)
					{
						cc=1;
						break;
					}
				if(cc)
				{
					for(int j=1;j<v[i].size();j++)
					if(v[i][j].first!=v[i][0].first)
					{
						cc=2;
						break;
					}
				}
				if(cc==2)
					fbends=1;
			}
			if(fbends)
				break;
		}
		if(fbends)
		{
			cout<<"NO"<<endl;
			continue;
		}
		int np=0;
		for(int i=0;i<26;i++)
		{
			if(v[i].size()>0)
			{
				np=0;
				int x =(int) v[i].size()-1;
				if(v[i][0].first!=v[i][x].first)
				{
					for(int k = v[i][0].first;k<=v[i][x].first;k++)
						if(a[k][v[i][0].second]-'a'<i)
						{
							//cout<<i<<" "<<k<<" "<<v[i][0].second<<" "<<a[k][v[i][0].second]<<endl;
							np=1;
							break;
						}
				}
				else if( v[i][0].second!=v[i][x].second)
				{
					for(int k = v[i][0].second;k<=v[i][x].second;k++)
						if(a[v[i][0].first][k]-'a'<i)
						{
							np=1;
							break;
						}
				}
				if(np)
					break;
			}
		}
		if(np)
		{
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl<<ma+1<<endl;
		for(int i=0;i<26;i++)
		{
			int  k = i;
			if(i>ma)
				break;
			if(v[i].size()==0)
			{
			for(int j=i+1;j<26;j++)
				if(v[j].size()!=0)
				{
					int x =(int) v[j].size()-1;
					cout<<v[j][0].first<<" "<<v[j][0].second<<" "<<v[j][x].first<<" "<<v[j][x].second<<endl;
					break;
				}
			}
			else
			{
					int x =(int) v[i].size()-1;
					cout<<v[i][0].first<<" "<<v[i][0].second<<" "<<v[i][x].first<<" "<<v[i][x].second<<endl;
			}
		}	

	}
}

	
