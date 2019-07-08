#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    
  int n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  ll x =__gcd(a[0],a[1]);
  for(int i=2;i<n;i++)
  x=__gcd(x,a[i]);
  //cout<<x;
  for(int i=0;i<n;i++)
  {
      a[i]/=x;
      while(a[i]>1)
      {
          if(a[i]%2==0)
          a[i]/=2;
          if(a[i]%3==0)
          a[i]/=3;
          if(a[i]%2!=0 && a[i]%3!=0 && a[i]!=1)
         { cout<<"NO";return 0;}
          
      }
  }
  cout<<"YES";
  
  
 
}