#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    IOS
	int n,m;
	cin>>n>>m;
	int a[m+1];
	int cur=1;
	ll d=0;
	for(int i=1;i<=m;i++)
	cin>>a[i];
	for(int i=1;i<=m;i++)
	{
		if(a[i]>=cur)
		{
			d+=a[i]-cur;
			cur=a[i];
		}
		else
		{
			d+=n-cur+a[i];
			cur=a[i];
		}
	}
	cout<<d;
}