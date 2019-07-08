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
	int flag=0;
	for(int i=-1000;i<=1000;i++)
	{
		int count=0;
		if(i==0)
			continue;
		for(int j=0;j<n;j++)
			if(a[j]/i>0)
				count++;
		if(count>=ceil((double)n/2))
		{
			flag=i;
			break;
		}
	}
	cout<<flag;
}	