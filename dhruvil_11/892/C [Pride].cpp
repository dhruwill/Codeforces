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
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m=1000000,in=0;
	int cc=0;
	for(int i=0;i<n;i++)
		if(a[i]!=1)
			cc++;
	for(int i=0;i<n;i++)
	{
		int ans = a[i];
		for(int j=i+1;j<n;j++)
		{
			ans=__gcd(a[j],ans);
			
			if(ans==1)
			{
				in =  j-i;
				//cout<<j<<" "<<i<<" "<<ans<< " "<<in<<" "<<m<<endl;
				if(m>in)
					m=in;
				break;
			}
		}
	}
	if(n==1 )
	{
		if(a[0]==1)
			cout<<0;
		else
			cout<<-1;
		return 0;
	}
	if(m == 1000000)
	{
		cout<<-1;
		return 0;
	}
	//cout<<cc<<" "<<m;
	cout<<cc-1+m;
	
}