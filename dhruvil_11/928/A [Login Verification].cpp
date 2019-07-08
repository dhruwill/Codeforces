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
bool check(char a)
{
	if(a=='l' || a=='i')
		return true;
	return false;
}
int main()
{
	IOS
	//n==1
	string s1;
	cin>>s1;
	int n;
	cin>>n;
	string ss[n];
	for(int i=0;i<n;i++)
		cin>>ss[i];
	int flag=0;
	for(int i=0;i<n;i++)
	{
		string s = s1;
		if(s.length()!=ss[i].length())
			continue;
		//string s1,s2;
		std::transform(s.begin(), s.end(), s.begin(), ::tolower);
		std::transform(ss[i].begin(), ss[i].end(), ss[i].begin(), ::tolower);
		if(s==ss[i])
		{
			cout<<"No";
			return 0;
		}
		for(int j=0;j<ss[i].length();j++)
		{
			if(s[j]!=ss[i][j])
			{
				if((s[j]=='o' && ss[i][j] == '0') || (s[j]=='0' && ss[i][j]=='o'))
					s[j]=ss[i][j];
				else if((check(s[j]) && ss[i][j]=='1' )|| (check(ss[i][j]) &&  s[j]=='1') || (check(s[j]) && check(ss[i][j])))
					s[j]=ss[i][j];
				//cout<<flag<<endl;
				//flag=1;
				//break;
			}
		}
	//cout<<s<<" "<<ss[i]<<endl;
		if(s==ss[i])
		{
			cout<<"No";
			return 0;
		}
	}
	
		cout<<"Yes";
}