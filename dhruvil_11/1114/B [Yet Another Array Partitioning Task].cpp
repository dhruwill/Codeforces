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
	int n,m,k;
	cin>>n>>m>>k;
	ll a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	map < ll ,int>m1;
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];

	}
	sort(b,b+n,greater<ll>());
	 ll sum=0;
	for(int i=0;i<m*k;i++)
	{
		sum+=b[i];
		m1[b[i]]++;
	}
	cout<<sum<<endl;
	int counter=0;
	int init=0;
	int last=0;
	for(int i=0;i<n && counter<k-1;i++)
	{
		if(m1[a[i]])
		{
			init++;
			m1[a[i]]--;
			if(init==m)
			{
				counter++;
				cout<<i+1<<" ";
				init=0;
				//last=i+1;
				continue;
			}
		}

	}


}