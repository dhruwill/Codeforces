

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
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
	IOS
	//n==1
	int n,m;
	cin>>n>>m;
	int t[n];
	for(int i=0;i<n;i++)
		cin>>t[i];
	cout<<0<<" ";
	multiset<int,greater<int>>s;
	s.insert(t[0]);
	int sum=t[0];
	for(int i=1;i<n;i++)
	{

		int ne=sum;
		if(ne+t[i]<=m)
			cout<<0<<" ";
		else
		{
			int cnt=1;
			ne+=t[i];
			for(auto it=s.begin();it!=s.end();it++)
				{
					if(ne-*it<=m)
						break;
					ne-=*it;
					cnt++;
				}
				cout<<cnt<<" ";
		}
		sum+=t[i];
		s.insert(t[i]);
	}
}