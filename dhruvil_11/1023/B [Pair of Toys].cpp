#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    ll n,k;
    cin>>n>>k;
    if(k>=2*n)
    cout<<0;
    else{
    if(k<=n)
    {
        if(k%2==0)
        cout<<k/2-1;
        else
        cout<<k/2;
        return 0;
    }
    else
    {
        if(k%2==0)
        cout<<(2*n-k)/2;
        else
        cout<<(2*n-k)/2+1;
    }
}}
    
