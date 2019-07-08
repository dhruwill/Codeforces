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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int flag=0;
		ll x = a[0]*a[n-1];
		for(int i=1;i<n/2+n%2;i++)
		{
			if(x!=(a[i]*a[n-i-1]))
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			int  top = 0 ;
			for(ll i = 2;i<=sqrt(x);i++)
			{
				if(i*i==x && a[top]==i)
				{
					top++;
					//flag=1;
					//break;
				}
				else if(i*i==x && a[top]!=i)
				{
					//top++;
					flag=1;
					break;
				}
				else if(i*i!=x && x%i==0)
				{
					if(a[top]==i && a[n-top-1]==x/i)
					{top++;	continue;}
					else
					{
						flag=1;
						break;
					}
				}

			}
		}
		if(flag)
			cout<<"-1\n";
		else
			cout<<x<<"\n";
	}
}