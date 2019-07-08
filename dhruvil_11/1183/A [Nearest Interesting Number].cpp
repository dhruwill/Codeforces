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
    int n;
    cin>>n;
    int f=0;
    while(1)
    {
        int z = n;
        int sum =0 ;
        while(z>0)
        {
            sum+=z%10;
            z/=10;
        }
        if(sum%4==0)
        {
            cout<<n;
            return 0;
        }
        n++;
    }
}