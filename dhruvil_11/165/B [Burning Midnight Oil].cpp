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
    ll n,k;
    cin>>n>>k;
    vector< ll >v;
    ll a = k;
    v.pb(a);
    if(n<=k)
    {
        cout<<n;
        return 0;
    }
    while(a*k<=1000000000)
    {
        
        a*=k;
        v.pb(a);
    }
    ll high = 1000000000;
    ll low = 1,mid;
    ll ans;
    while(low<=high)
    {
        mid=(high+low)/2;
        ll x=mid;
        for(int i=0;i<(int)v.size();i++)
            x+=mid/v[i];
        if(x==n)
        {
            ans=mid;
            break;
        }
        else if(x>n)
        {
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
       // cout<<x<<" ";
    }
    cout<<ans;
}