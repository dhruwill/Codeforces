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
	int x,y;
	cin>>x>>y;
	y--;
	if(y<0)
	{
		cout<<"NO";
		return 0;
	}
	if(y>x)
	{
		cout<<"NO";
		return 0;
	}
	x-=(y);
	//cout<<x<<endl;
	if((x>0 and x%2!=0 ) or (y==0 and x!=0))
	{
		cout<<"NO";
		return 0;
	}
	
	cout<<"YES";
}