#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    IOS
	int a[3]={0};
	string s;
	cin>>s;
	int f=0,i;
	for( i=0;i<s.length();i++ )
	{
		a[s[i]-'a']++;
		
	}
	for( i=0;i<s.length()-1;i++ )
	{
		if(s[i]>s[i+1])
		f=1;
		
	}
	
	//cout<<a[0]<<" "<<a[1]<<" "<<a[2];
	if(a[0]==0 || a[1]==0 || a[2]==0 || f==1 || (a[2]!=a[0] && a[2]!=a[1]))
	cout<<"NO";
	else cout<<"YES";
}
	
		
		
	