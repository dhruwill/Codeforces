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
	int n,d;
	cin>>n>>d;
	int mi[n],ma[n];
	for(int i=0;i<n;i++)
		cin>>mi[i]>>ma[i];
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(mi[i]<=d)
		{
			////ans+=mi[i];
			d-=mi[i];
			//cout<<d<<endl;
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	int c[n];
	for(int i=0;i<n;i++)
		c[i]=mi[i];
	for(int i=0;i<n;i++)
	{
		if(d)
		{
			//ans+=min(d-ans,ma[i]-mi[i]);
			if(d+mi[i]>=ma[i])
			{
				d-=(ma[i]-mi[i]);
				ans+=ma[i]-mi[i];
				c[i]=ma[i];
			}
			else
			{
				//c[i]=
				c[i]=d+mi[i];
				d=0;

				break;
			}
		}
	}
	if(d)
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++)
		cout<<c[i]<<" ";
}