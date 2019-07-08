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
	string s[6];
	for(int i=0;i<6;i++)
		cin>>s[i];
	int flag=0;
	for(int i=1;i<6;i++)
	{
		if(s[i][0]==s[0][0] || s[i][1]==s[0][1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	
}