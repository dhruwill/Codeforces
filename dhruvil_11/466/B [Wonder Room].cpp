#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define eb emplace_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define endl "\n"
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
	IOS
	//n==1
	ll n,a,b;
	cin>>n>>a>>b;
	n*=6;
	if(n<=a*b)
	{
		cout<<(ll)a*b<<endl;
		cout<<a<<" "<<b;
		return 0;
	}
	else
	{
		ll x=min(a,b);ll k = max(a,b);
		for(ll j =min(a,b);j<=sqrt(n);j++)
		{
			if(n%j==0 && n/j>=max(a,b))
			{
				
				if(min(a,b)==a)cout<<n<<endl<<j<<" "<<n/j;
				else cout<<n<<endl<<n/j<<" "<<j;
				return 0;
			}
			
		}
        ll z = x*ceil((double)n/x);
        for(ll i=x;i<=sqrt(n);i++)
        {
        	ll z1 =  i*ceil((double)n/i);
        	if(z>z1 && z1/i>=max(a,b))
        	{
        		z=z1,x=i;
        	}

        }
       
        ll y = ceil((double)n/x);
		if(min(a,b)==a)cout<<z<<endl<<x<<" "<<y;
		else cout<<z<<endl<<y<<" "<<x;
	}
}