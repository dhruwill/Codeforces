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
	ll ans=0;
	string s = to_string(n);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='1' && s[i]!='0')
		{
			for(int j=i;j<s.length();j++)
				s[j]='1';
			break;
		}
	}
	ll c2=1;
	for(int j = s.length()-1;j>=0;j--)
	{
		if(s[j]=='1')
			ans+=c2;
		c2*=2;
	}
	cout<<ans;
}