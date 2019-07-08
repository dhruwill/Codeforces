#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 998244353
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
	IOS
	//n==1
	int n;
	cin>>n;
	ll a[n],b[n];
	vector < pair < ll , int > >v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a[i]=1ll*a[i]*(n-i)*(i+1);
		//a[i]%=mod;
		v.pb({a[i],i});
	}
	vector< ll > v1;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		v1.pb({b[i]});
	}
	sort(v.begin(),v.end());
	sort(v1.begin(),v1.end());
	for(int i=0;i<n;i++)
	{
		b[v[i].second]=v1[n-i-1];
	}
	ll nar[n];
	for(int i=0;i<n;i++)
	{
		nar[i]=((a[i]%mod)*(b[i]))%mod;
		nar[i]%=mod;
	}
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		ans = (ans+nar[i])%mod;
	}
	cout<<ans%mod;
}