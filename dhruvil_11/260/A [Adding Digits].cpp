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
    ll a,b,n;
    cin>>a>>b>>n;
    ll x=a;
    for(int i=0;i<=9;i++)
    {
        x*=10;
        x+=i;
        if(x%b==0)
        {
            n-=1;
            cout<<x;
            while(n--)
            cout<<0;
            return 0;
        }
        else
        x=a;
    }
    cout<<-1;
}