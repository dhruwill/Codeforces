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
	ll n,k;
	cin>>n>>k;
	if(k*(k-1)<n)
	{
		cout<<"NO";
		return 0;
	}
	vector < pair < int , int> >v;
	int co=1;
	while(n!=0)
	{
		for(int i = 1;i<=k;i++)
		{
			int xx = (i+co)%k;
			if(xx==0)
				v.pb({i,k});
			else
				v.pb({i,xx});
			n--;
			if(n==0)
				break;
		}
		co++;
	}
	cout<<"YES"<<endl;
	for(int i=0;i<(int)v.size();i++)
		cout<<v[i].first<<" "<<v[i].second<<endl;
}