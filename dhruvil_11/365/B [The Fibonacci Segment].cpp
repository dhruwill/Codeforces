#include<bits/stdc++.h>
using namespace std;
#define pi pair<ll,ll>
#define pb push_back
#define eb emplace_back
#define rep(i,n) for(int i=0;i<n;i++)
#define frep(i,n) for(int i=1;i<=n;i++)
#define vll vector <pair < ll ,ll> >
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define watch(x) cout << (#x) << " is " << (x) << endl;
//const double pi = 2 * acos(0.0);

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    IOS
    int n;
    cin>>n;
    ll a[n];
    rep(i,n)
    cin>>a[i];
    ll c=2,ma=0;
    if(n==1 ||n==2)
    {cout<<n;return 0;}
    
    for(int i=2;i<n;i++)
    {
        if(a[i]==a[i-1]+a[i-2])
        c++;
        else
        {
            if(ma<c)
            ma=c;
            c=2;
        }
    }
    cout<<max(c,ma);
}