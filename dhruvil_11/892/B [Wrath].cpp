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
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll x = 0;
	x = n-a[n-1];
	int c=0;
	for(int i=n-2;i>=0;i--)
	{
		if(i+1>=x)
			c++;
		x=min(x,i+1-a[i]);
	}
	cout<<n-c;

	
}