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
	string s;
	cin>>s;
	map< int , int > m;
	int l =1;
	int ma = s.length();
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='l')
		{
			m[ma]=i+1;
			ma--;
		}
		if(s[i]=='r')
		{
			m[l]=i+1;
			l++;
		}
	}
	for (std::map<int,int>::iterator it=m.begin(); it!=m.end(); ++it)
    std::cout  << it->second << "\n";
}