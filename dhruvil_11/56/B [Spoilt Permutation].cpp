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
	int a[n],b[n],i1=-1,i2=-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=i+1;
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]!=a[i] )
		{
			i1=i;
			break;
		}
		
	}
	for(int i=n-1;i>=0;i--)
	{
		if(b[i]!=a[i] )
		{
			i2=i;
			break;
		}
		
	}
	int c[n];
	//cout<<i1<<i2;
	for(int i=i1;i<=i2;i++)
		c[i]=a[i2+i1-i];
	for(int i=i1;i<=i2;i++)
		a[i]=c[i];
	int flag=0;
	for(int i=0;i<n;i++)
		if(a[i]!=b[i])
			flag=1;
	if(!flag)
		cout<<i1+1<<" "<<i2+1;
	else
		cout<<0<<" "<<0;
}