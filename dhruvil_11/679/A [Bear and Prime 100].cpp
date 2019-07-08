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
}// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71
int main()
{
	IOS
	//n==1
	int flag=0;
	int a[]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	vector<int>v;
	for(int i=0;i<15;i++)
	{
		cout<<a[i]<<endl;
		fflush(stdout);
		string s;
		cin>>s;
		fflush(stdout);
		if(s=="no")
			continue;
		else
		{
			v.pb(a[i]);
			if(v.size()>1)
				break;
		}
	}
	if(v.size()>1)
	{
		cout<<"composite\n";
		return 0;
	}
	if(v.size()==0)
	{
		cout<<"prime\n";
		return 0;
	}
	if(v[0]<10)
	{
		fflush(stdout);
		cout<<v[0]*v[0]<<endl;
		fflush(stdout);
		string s;
		cin>>s;
		if(s=="no")
		{
			cout<<"prime\n";
			return 0;
		}
		else
		{
			cout<<"composite\n";
			return 0;
		}
	}
	else
	{
		fflush(stdout);
		cout<<"prime"<<"\n";
		return 0;
	}
	
}