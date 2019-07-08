#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define eb emplace_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define endl "\n"
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
	int k1;
	vector<int>v;
	cin>>k1;
	for(int i=0;i<k1;i++)
	{
		int a;
		cin>>a;
		v.pb(a);
	}
	int k2;
	cin>>k2;
	vector<int>v1;
	for(int i=0;i<k2;i++)
	{
		int a;
		cin>>a;
		v1.pb(a);
	}
	int c=0,c1=0,cnt=0;
	while(c!=v.size() && c1!=v1.size())
	{
		if(v[c]<v1[c1])
		{
			
			v1.pb(v[c]);
			v1.pb(v1[c1]);
			c1++;
			c++;
		}
		else
		{
			v.pb(v1[c1]);
			v.pb(v[c]);
			c1++;
			c++;
		}
		//cout<<c<<" "<<v.size()<<" "<<c1<<" "<<v1.size()<<endl; 
		cnt++;
		if(cnt>10000)
			break;
	}
	if(cnt>10000)
		cout<<-1;
	else
	{
		if(c==v.size())
			cout<<cnt<<" "<<2;
		else
			cout<<cnt<<" "<<1;
	}
}