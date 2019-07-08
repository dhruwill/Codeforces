#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define p 1000000007
ll power( ll y) 
{ 
    ll res = 1;      // Initialize result 
    ll x= 2;
    // = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y%2==1) 
            res = ((res%p)*(x%p)) % p; 
  
        // y must be even now 
        y/=2; // y = y/2 
        x = ((x%p)*(x%p)) % p;   
    } 
    return res%p; 
} 
int main()
{
    ll n,t;
    cin>>n>>t;
    ll a[n],b[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        b[0]=a[0];
        else
        b[i]=b[i-1]+a[i];
        //cout<<b[i]<<" ";
    }
    int ax=0;
    for(int i=0;i<n;i++)
    {
       // int x=a[i];
        int y= lower_bound(b+i,b+n,t+b[i]-a[i])-b;
        //cout<<y<<" ";
        if(b[y]-b[i]+a[i]>t)
        y-=1;
        if(y-i+1>ax)
        ax=y-i+1;
        
    }
    cout<<ax;
}