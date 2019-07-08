#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin>>n>>m;
    if(m>=n)
    {
        cout<<0<<" ";
        ll k=sqrt(2*m);
        while((k*(k-1)/2)<m)
        k++;
        cout<<n-k;
    }
    else
    {
        ll k=sqrt(2*m);
        while((k*(k-1)/2)<m)
        k++;
        
        if(n-2*m<=0)
        cout<<0<<" "<<n-k;
        else
        cout<<n-2*m<<" "<<n-k;
    }
}