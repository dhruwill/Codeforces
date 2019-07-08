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
ll dp[200005];
ll n,k;
ll solve(ll nn)
{
    if(nn==0)
        return 1;
    if(nn<0)
        return 0;
    if(dp[nn])
        return dp[nn];
    return dp[nn] = (solve(nn-k)%mod + solve(nn-1)%mod)%mod;
}
int main()
{
    IOS
    //n==1
    cin>>n>>k;
    //solve(100000);
    dp[0]=1;
    for(int i=1;i<=100000;i++)
    {
        if(i>=k)
            dp[i] = (dp[i-1]+dp[i-k])%mod;
        else
            dp[i]=dp[i-1]%mod;
    }
   // cout<<dp[1]<<" "<<dp[2]<<" "<<dp[3]<<" "<<dp[4]<<endl;
    for(int i=1;i<=100000;i++)
        dp[i] = (dp[i]+dp[i-1])%mod;
   // cout<<dp[1]<<" "<<dp[2]<<" "<<dp[3]<<" "<<dp[4]<<endl;
    for(int i=1;i<=n;i++)
    {
        int l ,r;
        cin>>l>>r;
        ll z = (dp[r]-dp[l-1]+mod)%mod;
        cout<<z<<endl;
    }
}