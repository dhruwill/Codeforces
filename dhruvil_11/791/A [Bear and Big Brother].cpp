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
	int a,b;
	cin>>a>>b;
	int n=0;
	while(a<=b)
	{
		a*=3;
		b*=2;
		n++;
	}
	cout<<n;
}