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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int flag=0;
        ll ma=0;
        a[0]+=k;
        for(int i=1;i<n;i++)
            if(abs(a[i]-a[0])>k)
            {
                flag=1;
                break;
            }
        if(flag)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<a[0]<<endl;
        }
    }
}