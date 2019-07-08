#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,k;
    cin>>n>>k;
    if(k<=(n/2+n%2))
    cout<<2*k-1;
    else
    {
        k-=(n/2+n%2);
        cout<<2*k;
    }
    
}