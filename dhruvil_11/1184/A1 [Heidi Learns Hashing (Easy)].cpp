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
	ll r;
	cin>>r;
	r--;
	for(ll i=1;i<=sqrt(r);i++)
	{
		if(r%i==0)
		{
			ll y = r/i;
			ll x = i;
			y-=x;
			y--;
			if(y>0 and y%2==0)
			{
				cout<<x<<" "<<y/2;
				return 0;
			}
		}
	}
	cout<<"NO";
}