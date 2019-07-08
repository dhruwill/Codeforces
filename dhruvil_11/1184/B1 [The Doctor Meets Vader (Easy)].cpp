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
	int s,b;
	cin>>s>>b;
	ll a[s];
	for(int i=0;i<s;i++)
		cin>>a[i];
	ll d[b],g[b];
	vector< pair<ll,ll> >v;
	map<ll ,ll>m;
	for(int i=0;i<b;i++)
	{
		cin>>d[i]>>g[i];
		m[d[i]]+=g[i];
	}
	for(auto it = m.begin();it!=m.end();it++)
		v.eb(it->first,it->second);
	sort(v.begin(),v.end());
	int cc = v.size();
	ll pre[v.size()];
	pre[0]=v[0].second;

	for(int i=1;i<cc;i++)
		pre[i]=pre[i-1]+v[i].second;
	//for(int i=0;i<cc;i++)
	//	cout<<pre[i]<<" ";
	ll dd[cc];
	for(int i=0;i<cc;i++)
		dd[i]=v[i].first;
	for(int i=0;i<s;i++)
	{
		ll z = 0;
		int y = lower_bound(dd,dd+cc,a[i])-dd;
		if(y<cc)
		{
			if(dd[y]>a[i])
				y--;
			if(y<0)
				{cout<<0<<" ";continue;}
			z = pre[y];
			cout<<z<<" ";
		}
		else
		{
			cout<<pre[cc-1]<<" ";
		}
	}
}