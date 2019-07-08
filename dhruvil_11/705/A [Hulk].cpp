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
	string s1="I hate it";
	string s2="I hate that";
	string s3 = "I love it";
	string s4="I love that";
	int n;
	cin>>n;
	int cnt=0;
	for(int i=0;i<n-1;i++)
	{
		if(cnt%2==0)
			cout<<s2;
		else
			cout<<s4;
		cnt++;
		cout<<" ";
	}
	if(cnt%2==0)
		cout<<s1;
	else
		cout<<s3;
}