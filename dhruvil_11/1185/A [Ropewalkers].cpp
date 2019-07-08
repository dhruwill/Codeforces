#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
#define testcase(t) int t;cin>>t;while(t--)
#define pb push_back
#define eb emplace_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define endl "\n"
#define imax INT_MAX
#define imin INT_MIN
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
	IOS
	//n==1
	ll a[3],d;
	cin>>a[0]>>a[1]>>a[2]>>d;
	sort(a,a+3);
	ll ans=0;
	 if(abs(a[1]-a[0])<d)
	 	ans+=(d-(abs(a[1]-a[0])));
	 	 if(abs(a[1]-a[2])<d)
	 	ans+=(d-(abs(a[2]-a[1])));
	 cout<<ans<<endl;


}