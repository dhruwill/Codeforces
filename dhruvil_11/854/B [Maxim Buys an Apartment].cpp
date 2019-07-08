#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,k;
    cin>>n>>k;
    if(n<k || k==0 || k==n)
    {
        cout<<0<<" "<<0;
        return 0;
    }
    if(k>=n/2)
    {
        cout<<1<<" "<<n-k;
    }
    else
    {
        if(2*k<n-k)
        {
            cout<<1<<" "<<2*k;
            
        }
        else
        cout<<1<<" "<<n-k;
    }
}