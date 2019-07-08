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
	int n,x=1;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	ll m = 10000000000;
	for(int i=1;i<=n;i++)
	{
		x=i;
		ll ans=0;
		for(int j=1;j<=n;j++)
			ans+=a[j]*(abs(x-j)+abs(j-1)+abs(1-x));
		ans*=2;
		m=min(ans,m);
	}
	cout<<m;	
}