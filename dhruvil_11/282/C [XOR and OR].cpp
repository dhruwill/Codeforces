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
	if(s1.length()!=s2.length()){

		cout<<"NO";
		return 0;
	}
	if(s1==s2)
	{
		cout<<"YES";
		return 0;
	}
	int flag=1;
	int f=1;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]!='0')
			flag=0;
		if(s2[i]!='0')
			f=0;
	}
	if(flag==0  && f==0)
		cout<<"YES";
	else
		cout<<"NO";
}