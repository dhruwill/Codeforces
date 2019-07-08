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
	int n;
	cin>>n;
	string s;
	cin>>s;
	stack< char> st;
	stack< int>st1;
	st1.push(0);
	st.push('(');
	vector<int>v;
	v.pb(0);
	for(int i=1;i<s.length();i++)
	{
		if(s[i]=='(')
		{
			st.push(s[i]);
			if(st1.empty())
				st1.push(0),v.pb(0);
			else
				st1.push(1-st1.top()),v.pb(st1.top());

		}
		else
		{
			st.pop();
			//cout<<st1.top();
			v.pb(st1.top());
			st1.pop();
		}
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i];
	
}