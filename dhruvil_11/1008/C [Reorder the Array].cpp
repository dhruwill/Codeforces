#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll i,j=0;
    ll a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int cunt=0;
    for(i=1;i<n;i++)
    {
        if(a[cunt]<a[i])
        cunt++;
    }
    cout<<cunt;
}