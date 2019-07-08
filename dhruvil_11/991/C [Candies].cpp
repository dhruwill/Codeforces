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
	ll ans =0,x=0,k=0;
	ll l = 1;
	ll h = n;
	ll m;
	while(l<=h)
	{
		m=(l+h)/2;
		x=0;
		ll y = n;
		while(y>0)
		{
			ll g  = min(m,y);
			x+=g;
			y-=g;
			y-=y/10;
		}
		if(2*x>=n)
		{
			ans = m;
			h = m-1;
		}
		else
		{
			l = m+1;
		}
	}
	cout<<ans;
	
}