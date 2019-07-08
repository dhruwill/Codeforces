#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
double power(double x, ll y) 
{ 
    double res = 1.0;      // Initialize result 
  
    x = x ;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) ; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) ;   
    } 
    return res; 
} 
int main()
{
    double n;ll t;
    cin>>n>>t;
    n*=power(1.000000011,t);
    printf("%0.20f",n);
}