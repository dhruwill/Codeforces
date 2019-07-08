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
	int n;
	cin>>n;
	int a[2*n];
	vector< int >v[100001];
	for(int i=0;i<2*n;i++)
	{
		cin>>a[i];
		v[a[i]].pb(i+1);
	}
	//for(int i=1;i<=n;i++)
	//	cout<<v[i][0]<<" "<<v[i][1]<<endl;
	ll ans=0;
	ll start=1;
	for(int i=1;i<=n;i++)
	{
		ans+=abs(v[i][0]-start);
		start=v[i][0];
	}
	start=1;
	for(int i=1;i<=n;i++)
	{
		ans+=abs(v[i][1]-start);
		start=v[i][1];
	}
	cout<<ans;
}	