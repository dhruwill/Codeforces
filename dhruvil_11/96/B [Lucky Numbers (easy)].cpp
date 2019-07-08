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
	string s1=to_string(n);
	if(s1.length()%2)
	{
		int j = s1.length()+1;
		for(int i=0;i<j/2;i++)
			cout<<4;
		for(int i=0;i<j/2;i++)
			cout<<7;
		return 0;
	}
	else
	{
		vector<int>v;
		for(int i=0;i<s1.length()/2;i++)
			v.pb(4);
		for(int i=0;i<s1.length()/2;i++)
			v.pb(7);
		do
		{
			ll ans = 0;
			for(int i=0;i<v.size();i++)
				ans*=10,ans+=v[i];
			if(ans>=n)
			{
				cout<<ans;
				return 0;
			}
		}while(next_permutation(v.begin(),v.end()));
		int j = s1.length()+2;
		for(int i=0;i<j/2;i++)
			cout<<4;
		for(int i=0;i<j/2;i++)
			cout<<7;
		return 0;

	}
}



