#include<bits/stdc++.h>
using namespace std;
#define pi pair<ll,ll>
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define frep(i,n) for(int i=1;i<=n;i++)
#define vll vector <pair < ll ,ll> >
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	string s;
	cin>>s;
	int i=0;
	int n=s.length();
	while(i<=n)
	{
		if(s[i]=='.')
		cout<<0;
		else if(s[i]=='-')
		{
			if(s[i+1]=='.')
			cout<<1;
			else
			cout<<2;
			i++;
		}
		i++;
	}
}