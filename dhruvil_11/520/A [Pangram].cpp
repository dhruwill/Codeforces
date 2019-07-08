#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	//s1.tolower();
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int c[26]={0};
	int ans=0;
	for(int i=0;i<n;i++)
	{
	    if(c[s[i]-'a']==0)
	    {
	        ans++;
	        c[s[i]-'a']=1;
	    }
	}
	if(ans==26)
	cout<<"YES";
	else
	cout<<"NO";
	
	
	
}