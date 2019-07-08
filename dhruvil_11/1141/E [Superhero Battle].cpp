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
	ll h,n;
	cin>>h>>n;
	ll d[n];
	for(ll i=0;i<n;i++)
		cin>>d[i];
	ll hi = 1e12;
	ll lo = 1;
	ll mi;
	ll ans=-1;
	ll pre=0;
	for(ll i=0;i<n;i++)
		pre+=d[i];
	//cout<<pre;
	ll x=h;
	for(ll i=0;i<n;i++)
	{
		x+=d[i];
		if(x<=0)
		{
			cout<<i+1;
			return 0;
			
		}
	}
	if(pre>=0)
	{
		cout<<-1;
		return 0;
	}
	if(abs(pre)>1)
		hi/=(abs(pre)-1);
	hi+=1e6;
	while(lo<=hi)
	{
		mi=(lo+hi)/2;
		ll x = h + (mi-1)*pre;
		
		if(x<=0)
		{
			ans=(mi-1)*n;
			hi=mi-1;
			continue;
		}
	
		int fl=1;int in=-1;
		for(ll i=0;i<n;i++)
		{
			x+=d[i];
			if(x<=0)
				{fl=0,in=i;break;}
		}
		if(fl==0)
		{
			ans = (mi-1)*n+in+1;
			hi=mi-1;
		}
		else
		{
			lo=mi+1;
		}
	
	}
	cout<<ans;
}