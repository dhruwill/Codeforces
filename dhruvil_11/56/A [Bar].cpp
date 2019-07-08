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
	map<string ,int>m;
	m["ABSINTH"]=1;
	m["BEER"]=1;
	m["BRANDY"]=1;
	m["CHAMPAGNE"]=1;
	m["GIN"]=1;
	m["RUM"]=1;
	m["SAKE"]=1;
	m["TEQUILA"]=1;
	m["VODKA"]=1;
	m["WHISKEY"]=1;
	m["WINE"]=1;
	m["0"]=1;
	m["1"]=1;
	m["2"]=1;
	m["3"]=1;
	m["4"]=1;
	m["5"]=1;
	m["6"]=1;
	m["7"]=1;
	m["8"]=1;
	m["9"]=1;
	m["10"]=1;
	m["11"]=1;
	m["12"]=1;
	m["13"]=1;
	m["14"]=1;
	m["15"]=1;
	m["16"]=1;
	m["17"]=1;
	//m[""]=1;
	int n;
	cin>>n;
	int cnt=0;
	while(n--)
	{
		string s;
		cin>>s;
		if(m[s])
			cnt++;
	}
	cout<<cnt;
	
}