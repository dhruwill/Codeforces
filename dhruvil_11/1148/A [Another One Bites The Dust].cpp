#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define endl "\n"
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
	IOS
	//n==1
	ll a,b,c;
	cin>>a>>b>>c;
	ll ans = 2*c;
	ans+=2*min(a,b);
	ll z = min(a,b);
	a-=z;
	b-=z;
	if(a || b)
		ans++;
	cout<<ans;
}