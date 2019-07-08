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
	int n;
	cin>>n;
	while(n--)
	{
		string s1,s2;
		cin>>s1>>s2;
		string s3="",s4="";
		s3+=s1[0];
		s4+=s2[0];
		vector< int > v,v1;
		v.pb(1);
		v1.pb(1);
		int cnt=0;
		for(int i=1;i<s1.length();i++)
			{
				if(s1[i]!=s1[i-1])
				{
					s3+=s1[i];
					v.pb(1);
					cnt++;
				}
				else
					v[cnt]++;
			}
			cnt=0;
			for(int i=1;i<s2.length();i++)
			{
				if(s2[i]!=s2[i-1])
				{
					s4+=s2[i];
					v1.pb(1);
					cnt++;
				}
				else
					v1[cnt]++;
			}
		if(s3!=s4)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else
		{
			int fkag=0;
			for(int i=0;i<v.size();i++)
				if(v[i]>v1[i])
					fkag=1;
			if(fkag==1)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
			continue;
		}

	}
}