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
    return (a.first < b.first);
}
int main()
{
	IOS
	//n==1
	int n,k;
	cin>>n>>k;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	vector< pair< ll,ll> >v;
	map<ll,ll>m,m1;
	for(int i=0;i<n;i++)
	{
		m[a[i]]=i;
		v.eb(a[i],b[i]);
	}
	sort(v.begin(), v.end(),sortbysec);
	multiset<ll>s;
	int cnt=0;
	ll sum = 0;
	for(int i=0;i<n;i++)
	{
		//cout<<v[i].first<<" "<<m[a[i]]<<endl;
		if(cnt<=k)
		{
			m1[m[v[i].first]]=sum+v[i].second;
			sum+=v[i].second;
			s.insert(v[i].second);
		}
		else
		{
			m1[m[v[i].first]]=sum+v[i].second-*s.begin();
			if(*s.begin()>=v[i].second)
				continue;
			else
			{
				sum  = sum -*s.begin() + v[i].second;
				s.erase(s.begin());
				s.insert(v[i].second);
			}
		}
		cnt++;
	}
	for(int i=0;i<n;i++)
		cout<<m1[i]<<" ";
}