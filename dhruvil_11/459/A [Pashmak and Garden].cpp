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
    ll x[2],y[2];
    for(int i=0;i<2;i++)
    cin>>x[i]>>y[i];
    if(x[0]==x[1])
    {
        cout<<abs(y[0]-y[1])+x[0]<<" "<<y[0]<<" "<<abs(y[0]-y[1])+x[1]<<" "<<y[1];
        return 0;
    }
    else if(y[0]==y[1]){
        cout<<x[0]<<" "<<abs(x[0]-x[1])+y[0]<<" "<<x[1]<<" "<<abs(x[0]-x[1])+y[1];
        return 0;
    }
    else
    {
        if(abs(x[0]-x[1])==abs(y[0]-y[1]))
        {cout<<x[0]<<" "<<y[1]<<" "<<x[1]<<" "<<y[0];
        return 0;}
    }
    cout<<-1;
}