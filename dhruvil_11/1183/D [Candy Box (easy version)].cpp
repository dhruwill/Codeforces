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
        int n;
        cin>>n;
        ll a[n];
        ll b[n+1]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        sort(b,b+n+1);
        ll sum=0;
        ll curr = b[n];
        for(int i = n;i>=1;i--)
        {
            if(b[i]>=curr)
            {
              //  cout<<curr<<endl;
                sum+=curr;
                curr--;
                if(curr<=0)
                    break;
            }
            else
            {
                sum+=b[i];
                curr=b[i]-1;
                if(curr<=0)
                    break;
            }
        }
        cout<<sum<<endl;

    }
}