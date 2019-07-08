#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define p 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
ll power(ll x,ll y) 
{ 
     ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res;  
}
int main()
{
    IOS
    //n==1
    ll n;
    cin>>n;
    ll ans = 0;
    ll z = n;
    for(ll i =1;i<=4;i++)
    {
        z*=(n-i);
        z/=(i+1);
    }
    ans+=z;
    z = n;
    for(ll i =1;i<=5;i++)
    {
        z*=(n-i);
        z/=(i+1);
    }
    ans+=z;
    z = n;
    for(ll i =1;i<=6;i++)
    {
        z*=(n-i);
        z/=(i+1);
    }
    ans+=z;
    cout<<ans;
    
    
    

}