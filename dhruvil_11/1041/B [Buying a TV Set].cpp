#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   IOS 
   
   ll a,b,x,y;
   cin>>a>>b>>x>>y;
   ll t=__gcd(x, y);
   y/=t;
   x/=t;
   //cout<<x<<y;
   cout<<min(a/x,b/y);
}
   