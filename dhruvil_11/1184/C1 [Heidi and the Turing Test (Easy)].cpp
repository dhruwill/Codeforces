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
	if(a.first==b.first)
		return a.second<b.second;
    return (a.first < b.first);
}
int main()
{
	IOS
	//n==1
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<4*n+1;i++)
	{
		int a,b;
		cin>>a>>b;
		v.eb(a,b);
	}
	sort(v.begin(), v.end(),sortbysec);
	for(int i=0;i<4*n+1;i++)
	{
		int minx=1e9,maxx=0,miny=1e9,maxy=0;
		for(int j=0;j<4*n+1;j++)
		{
			if(i!=j)
			{
				minx=min(minx,v[j].first);
				maxx = max(maxx,v[j].first);
				miny=min(miny,v[j].second);
				maxy = max(maxy,v[j].second);
			}
		}
		if((maxx-minx)!=(maxy-miny))continue;
		int f=0;
		for(int j=0;j<4*n+1;j++)
		{
			if(i!=j)
			{
				if(v[j].first>minx and v[j].first<maxx)
					if(!(v[j].second==miny or v[j].second==maxy))
						f=1;
				if(v[j].second>miny and v[j].second<maxy)
					if(!(v[j].first==minx or v[j].first==maxx))
						f=1;
			}

		}
		if(!f)
		{
			cout<<v[i].first<<" "<<v[i].second;
			return 0;
		}
	}
}