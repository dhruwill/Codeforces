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
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
int main()
{
	IOS
	//n==1
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(n==2 || n==3)
		{
			cout<<1;
			return 0;
		}
	int ind1=-1,ind2=-1,ind3=-1;
	vector< pair < ll , ll >  > v;
	for(int i=0;i<n;i++)
		v.pb({a[i],i});
	sort(v.begin(),v.end());
	for(int i=1;i<n-1;i++)
		if(v[i].first-v[i-1].first!=v[i+1].first-v[i].first)
		{
			ind1=i,ind2=i-1,ind3  = i+1;
		}
	int flag=0;
	if(ind1==-1)
	{
		cout<<v[0].second+1;
		return 0;
	}
	ll d = v[ind3].first-v[ind1].first;
	ll b[n-1];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(i==ind2)
			continue;
		else
			b[cnt++]=v[i].first;
	}
	for(int i=1;i<cnt;i++)
		if(b[i]-b[i-1]!=d)
			flag=1;
	if(flag==0)
	{
		cout<<v[ind2].second+1;
		return 0;
	}
	d = v[ind3].first-v[ind2].first;
	cnt=0;
	for(int i=0;i<n;i++)
	{
		if(i==ind1)
			continue;
		else
			b[cnt++]=v[i].first;
	}
	flag=0;
	for(int i=1;i<cnt;i++)
		if(b[i]-b[i-1]!=d)
			flag=1;
	if(flag==0)
	{
		cout<<v[ind1].second+1;
		return 0;
	}
	flag=0;
	d = v[ind1].first-v[ind2].first;
	cnt=0;
	for(int i=0;i<n;i++)
	{
		if(i==ind3)
			continue;
		else
			b[cnt++]=v[i].first;
	}
	for(int i=1;i<cnt;i++)
		if(b[i]-b[i-1]!=d)
			flag=1;
	if(flag==0)
	{
		cout<<v[ind3].second+1;
		return 0;
	}
	cout<<-1;
	return 0;

}