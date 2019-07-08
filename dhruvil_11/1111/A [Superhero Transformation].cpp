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
bool isit(char a,char b)
{
	if((a=='a' || a=='e'||a=='i' || a=='u'||a=='o')&&(b=='a' || b=='e'||b=='i' || b=='u'||b=='o'))
		return true;
	else if (!((a=='a' || a=='e'||a=='i' || a=='u'||a=='o')||(b=='a' || b=='e'||b=='i' || b=='u'||b=='o')))
		return true;
	else
		return false;
}
int main()
{
	IOS
	//n==1
	string s,t;
	cin>>s>>t;
	if(s.length()!=t.length())
	{
		cout<<"No";
		return 0;
	}
	int flag=0;
	for(int i=0;i<s.length();i++ )
	{
		if(!isit(s[i],t[i]))
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"No";
	else
		cout<<"Yes";
	
}