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
	int b,k;
	cin>>b>>k;
	int odd=0,c[k];
	for(int i=0;i<k;i++)
		cin>>c[i];
	for(int i=0;i<k;i++)
	{
		if(i==k-1)
		{
			if(c[i]%2)
				odd++;
		}
		else
		{
			if(b%2 && c[i]%2)
				odd++;
		}
	}
	//cout<<odd;
	if(odd%2==0)
		cout<<"even";
	else
		cout<<"odd";
}