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
bool iss(ll k,ll n)
{
	ll g = k;
	while(k>0)
	{
		g+=k%10;
		k/=10;
	}
	if(g==n)
		return true;
	else
		return false;
}
int main()
{
	IOS
	//n==1
	ll n;
	vector< ll>v;
	cin>>n;
	ll x = min(100ll,n);
	for(ll i = n-x;i<=n;i++)
	{
		if(iss(i,n))
			v.pb(i);
	}	
	cout<<v.size()<<endl;
	for(int i=0;i<(int)v.size();i++)
		cout<<v[i]<<endl;
}