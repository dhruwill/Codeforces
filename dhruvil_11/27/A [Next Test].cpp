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
    int n;
    cin>>n;
    int a[n];
    int b[3001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=1;i<=3000;i++)
    {
        if(b[i]==0)
        {
            cout<<i;
        return 0;
        }
    }
    cout<<3001;
}