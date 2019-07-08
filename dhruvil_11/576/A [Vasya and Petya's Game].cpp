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
	vector<int>v;
	for(int i=2;i<=n;i++)
	{
		int flag=0;
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0)
			{
				flag=1;
				break;
			}
		if(flag==0)
		{
			int x = i;
			while(x<=n)
				{
					v.pb(x);
					x*=i;
				}
		}
	}
	cout<<v.size()<<"\n";
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}