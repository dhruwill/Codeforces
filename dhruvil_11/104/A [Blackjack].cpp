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
	map< int ,int >m;
	m[1]=4,m[2]=4,m[3]=4,m[4]=4,m[5]=4,m[6]=4,m[7]=4,m[8]=4,m[9]=4,m[10]=15,m[11]=4;
	int n;
	cin>>n;
	n-=10;
	cout<<m[n];
}