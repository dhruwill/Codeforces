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
int main()
{
	IOS
	//n==1
	ll n;
	cin>>n;
	ll x = 2;
	cout<<2<<"\n";
	for(ll i=2;i<=n;i++)
	{
		ll ans = pow(i,3)+2*pow(i,2)+1;
		cout<<ans<<"\n";
	}
}