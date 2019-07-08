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
  ll mi =1000001;
  for(int i=0;i<n;i++)
  {
      if(i==0)
      mi=min(mi,a[n-1]-a[1]);
      else if(i==n-1)
      mi=min(mi,a[n-2]-a[0]);
      else
      mi=min(mi,a[n-1]-a[0]);
  }
  cout<<mi;
}