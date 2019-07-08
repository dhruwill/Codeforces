#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n],sum=0;
    for(ll i=0;i<n;i++)
    {cin>>a[i];
    sum+=a[i];}
    for(ll i=0;i<n;i++)
    {

        cin>>b[i];

    }
    sort(b,b+n);
    if(b[n-1]+b[n-2]>=sum)
        cout<<"YES";
    else
        cout<<"NO";
}
