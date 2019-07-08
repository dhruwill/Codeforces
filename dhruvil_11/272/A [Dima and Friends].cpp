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
int main()
{
    IOS
    int n;
    int s=0;
    cin>>n;
    int a[n];
    rep(i,n)
    {
        cin>>a[i];
        s+=a[i];
    }int c=0;//cout<<s<<" "<<n+1<<" ";
    n+=1;
    for(int i=1;i<=5;i++)
    {
        if(((s+i)%n)!=1)
        {
           //cout<<i<<" ";
            c++;}
    }
    cout<<c;
}
        