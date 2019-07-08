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
	int n,k;
	cin>>n>>k;
	ll c[n+1],in[n+1];
	//map< int,ll>m;
	std::vector< pair < ll ,int > > v;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
		in[i]=i;
		//m[i]=c[i];
		v.pb({c[i],in[i]});
	}
	int ind[n+1]={0};
	set< int > s;
	for(int i=1;i<=n;i++)
		s.insert(k+i);
	sort(v.begin(),v.end());
	ll ans=0;
	for(int i=n-1;i>=0;i--)
	{
		if(k+1>v[i].second)
		{
			int a=*s.begin();
			ind[v[i].second]=a;
			ans+=v[i].first*(a-v[i].second);
			s.erase(a);
		}
		else
		{
			int a = *s.lower_bound(v[i].second);
			ind[v[i].second]=a;
			ans+=v[i].first*(a-v[i].second);
			s.erase(a);
		}	
	}
	cout<<ans<<endl;
	for(int i=1;i<=n;i++)
		cout<<ind[i]<<" ";



}