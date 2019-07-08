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
	int n,k,m,t;
	cin>>n>>k>>m>>t;
	int a[m+1]={0};
	a[k]=1;
	int curr=k;
	int c = n;
	while(t--)
	{
		int l ,r;
		cin>>l>>r;
		if(l==1)
		{
			if(k>=r)
			{
				a[k]=0;
				a[k+1]=1;
				k++;
			}
			c++;
		}
		else
		{
			if(r>=k)
			{
				c = r;
			}
			else
			{
				a[k]=0;
				a[k-r]=1;
				k-=r;
				c = c-r;
			}
		}
		cout<<c<<" "<<k<<endl;
	}
}