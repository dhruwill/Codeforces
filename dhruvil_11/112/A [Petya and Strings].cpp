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
	string s1,s2;
	cin>>s1>>s2;
	 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if(s1>s2)
	cout<<1;
	if(s1==s2)
	cout<<0;
	if(s1<s2)
	cout<<-1;	
}