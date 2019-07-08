#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define max 1000000007
int main()
{
    ll n,k;
    cin>>n>>k;if(n==1)cout<<1;else{
    if(2*k>n)
    cout<<k-1;
    else 
    cout<<k+1;
    
    }
    
}