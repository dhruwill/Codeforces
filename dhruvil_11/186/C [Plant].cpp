#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define max  1000000007
ll power(ll x, unsigned ll y)
{
    ll res = 1;      // Initialize result
    x=2;
    x = x % max;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % max;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % max;  
    }
    return res;
}
int main()
{
    IOS
    ll n;
    cin>>n;
    ll i=1;
    i=power(2,n);
    
    
    cout<<((i*(i+1))/2)%max;
}