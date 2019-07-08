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
bool sortbysec(const pair < ll  , pair < int ,int  > > &a,
              const pair < ll  , pair < int ,int  > > &b)
{
    return (a.first < b.first);
}
 
int main()
{
	IOS
	//n==1
	int n,m;
	cin>>n>>m;
	vector< pair < ll  , pair < int ,int  > > >v;
	//map < pair< ll, pair < int , int >  > , bool >mm;
	int hi,lo=0;
	pair < ll  , pair < int ,int  > > xxx;
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		v.pb({c,{a,b}});
		if(i==0)
			xxx=v[0];
	}
	vector< pair < ll  , pair < int ,int  > > >v1;
	for(int i=1;i<m;i++)
		v1.pb(v[i]);
	sort(v1.begin(),v1.end(),sortbysec);
	sort(v.begin(),v.end(),sortbysec);
	int ans=0;
	hi=1e9;
	int par[n+1],rnk[n+1];
	ll sum=0;
		for(int i=1;i<=n;i++)par[i]=i;
		for(int i=1;i<=n;i++)rnk[i]=0;
			int cnt=0;
		for(int i=0;i<m-1;i++)
		{
			int kk = v1[i].second.second;
			int jj = v1[i].second.first;
			while(par[ kk ] != kk)
		    {	
			        par[ kk ] = par[ par[ kk ] ] ; 
					kk = par[ kk ]; 
		    }
		    while(par[ jj ] != jj)
		    {	
			        par[ jj ] = par[ par[ jj ] ] ; 
					jj = par[ jj ]; 
		    }
		    if(kk!=jj)
		    {
		    	if(rnk[kk]>rnk[jj])
		    	{
		    		rnk[kk]+=rnk[jj];
		    		par[jj]=kk;
		    	}
		    	else
		    	{
		    		par[kk]=jj;
		    		rnk[jj]=max(rnk[jj],rnk[kk]+1);
		    	}
		    	sum+=v1[i].first;
		    	cnt++;
		    }
		}
		if(cnt!=n-1)
		{
			cout<<1000000000;
			return 0;
		}
	//cout<<sum<<endl;
	while(lo<=hi)
	{
		int mid  = (lo+hi)/2;
		for(int i=1;i<=n;i++)par[i]=i;
		for(int i=1;i<=n;i++)rnk[i]=0;
		ll sum1=mid;
		rnk[xxx.second.first]++;
		par[xxx.second.second]=xxx.second.first;
		for(int i=0;i<m-1;i++)
		{
			int kk = v1[i].second.second;
			int jj = v1[i].second.first;
			while(par[ kk ] != kk)
		    {	
			        par[ kk ] = par[ par[ kk ] ] ; 
					kk = par[ kk ]; 
		    }
		    while(par[ jj ] != jj)
		    {	
			        par[ jj ] = par[ par[ jj ] ] ; 
					jj = par[ jj ]; 
		    }
		    if(kk!=jj)
		    {
		    	if(rnk[kk]>rnk[jj])
		    	{
		    		rnk[kk]+=rnk[jj];
		    		par[jj]=kk;
		    	}
		    	else
		    	{
		    		par[kk]=jj;
		    		rnk[jj]=max(rnk[jj],rnk[kk]+1);
		    	}
		    	sum1+=v1[i].first;
		    }
		}
		if(sum>=sum1)
		{
			ans = max(ans,mid);
			lo=mid+1;
		}
		else
		{
			hi = mid-1;
		}
	}
	cout<<ans;
	
}