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
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if(k==1 || k>n)
		{
			cout<<n<<"\n";
		}
		else
		{
			int cnt=0;
			ll ans=0;
			ll z  = (n/k)*k;
			ans+=(n-z);
			n=z;
			//cout<<n<<"\n";
			while(n>0)
			{
				if(n%k!=0)
				{
					z  = (n/k)*k;
					ans+=(n-z);
					n=z;
				}
				else{n/=k;
				//cout<<n<<"\n";
				ans++;}
			}
			cout<<ans<<"\n";
		}
	}
}