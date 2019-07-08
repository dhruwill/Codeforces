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
bool check(string s)
{
	string x="";
	x+=s[0];
	for(int i=1;i<s.length();i++)
	{
		x+=s[i];
		int z = stoi(x);
		z=z%7;
		if(z)
			x=to_string(z);
		else
		{
			if(i==s.length()-1)
				return true;
			if(i<s.length()-1)
			{
				x="";
				x+=s[i+1];
				i++;continue;
			}
		}

	}
	return false;
}
int main()
{
	IOS
	//n==1
	string s;
	cin>>s;
	string s1="";
	string s2="1689";
	string s0="";
	int c1=0,c2=0,c3=0,c4=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
			{s0+='0';continue;}
		if(s[i]=='1' && c1==0)
		{
			c1=1;
			continue;
		}
		else if(s[i]=='6' && c2==0)
		{
			c2=1;
			continue;
		}
		else if(s[i]=='8' && c3==0)
		{
			c3=1;
			continue;
		}
		else if(s[i]=='9' && c4==0)
		{
			c4=1;
			continue;
		}
		else
			s1+=s[i];
	}
	int flag=0;
	do
	{
		string g = s1;
		g+=s2;
		
		if(check(g))
		{
			g+=s0;
			cout<<g;
			return 0;
		}
	}while(next_permutation(s2.begin(),s2.end()));
	cout<<0;
}