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
	int l;
	cin>>l;
	stack < pair < string , ll > >st;
	ll x=0;
	ll fl=pow(2,32)-1;
	int cnt=0;
	for(int i=0;i<l;i++)
	{
		string s;
		cin>>s;
		if(s=="add")
		{
			if(st.empty())
				{
					x++;
						if(x>fl)
					{
						cout<<"OVERFLOW!!!";
						return 0;
					}
			}
			else
				{
					pair < string , ll>p=st.top();
					x+=p.second;
					if(p.second==0)
					{
						cout<<"OVERFLOW!!!";
						return 0;
					}
					//cout<<p.second<<"\n";
					if(x>fl )
					{
						cout<<"OVERFLOW!!!";
						return 0;
					}
				}
		}
		else if(s=="for")
		{
			ll k;
			cin>>k;
			if(st.empty())
			{
				
				st.push({"for",k});
			}
			else
			{
				pair < string , ll>p=st.top();
				if(p.second*k>fl)
					st.push({"for",0});
				else
				st.push({"for",p.second*k});
				//cout<<p.second*k<<"\n";
			}
		}
		else
		{
			if(!cnt)
				cnt--;
			st.pop();
		}
	}
	cout<<x;
}