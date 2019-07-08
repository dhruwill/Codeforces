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
    ll x,y,n;
    cin>>x>>y>>n;
    ll ma=1000000007;
    ll o;
    switch(n%6)
    {
        case 1:o=x%ma;break;
        case 2:o=y%ma;break;
        case 3:o=(y-x)%ma;break;
        case 4:o=(-1*x)%ma;break;
        case 5:o=(-1*y)%ma;break;
        case 0:o=(x-y)%ma;break;
        
    }
    if(o<0)
    cout<<o+ma;
    else
    cout<<o;
    return 0;
}