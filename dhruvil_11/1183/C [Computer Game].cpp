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
    testcase(t)
    {
        ll k,n,a,b;
        cin>>k>>n>>a>>b;
        ll num = ceil((double)k/b)-1;
        if(num<n)
        {
            cout<<-1<<endl;
            continue;
        }
        ll ans=0,l=0,r=0;
        r = n;
        while(l<=r)
        {
            ll m = (l+r)/2;
            if(k>m*a+(n-m)*b)
            {
                ans=max(ans,m);
                l=m+1;
                continue;
            }
            else
            {
                r = m-1;
            }
        }
        cout<<ans<<endl;
    }    
}