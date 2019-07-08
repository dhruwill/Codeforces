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
    int n,m,t;
    cin>>n>>m;
    if(n<m)
    cout<<-1;
    else if(n==m)
    cout<<n;
    else{
    for(t=1;t<=n/2;t++)
    {
        if(2*m*t-n>=0)
        break;
    }
    
    cout<<m*t;
   
    
    }
}