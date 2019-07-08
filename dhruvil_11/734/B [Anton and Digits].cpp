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
	int x=0,y=0;
	int a,b,c,d;
	cin>>a>>d>>b>>c;
	x=min(a,min(b,c));
	a-=x;
	b-=x;
	c-=x;
	x*=256;
	y=min(a,d);
	a-=y;
	d-=y;
	y*=32;
	cout<<x+y<<endl;
}