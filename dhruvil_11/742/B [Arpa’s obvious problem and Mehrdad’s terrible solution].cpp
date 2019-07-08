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
	int n,x;
	cin>>n>>x;
	ll fre[100001]={0},a[n];
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		fre[a[i]]++;
	}
	if(x==0)
	{
		for(int i=0;i<=100000;i++)
		{
			if(fre[i])
			{
				ans+=(fre[i]*(fre[i]-1))/2;
				//cout<<fre[i]<<" ";
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if((a[i]^x)<=100000)
		{
			ans+=fre[a[i]^x];
		}
	}
	
	cout<<ans/2;
}