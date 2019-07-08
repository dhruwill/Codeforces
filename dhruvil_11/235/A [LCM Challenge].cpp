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
	if(n%2!=0)
	{
		if(n==1)
		{
			cout<<1;
			return 0;
		}
		ll x = n;
		x*=(n-1);
		x*=(n-2);
		cout<<x;
	}
	else
	{
		if(n%6==0)
		{

			ll x = n-1;
		x*=(n-2);
		x*=(n-3);
		cout<<x;
		}
		else
		{if(n==2)
			{
				cout<<2;
				return 0;
			}ll x = n;
			
		x*=(n-1);
		x*=(n-3);
		cout<<x;
		}
	}
}