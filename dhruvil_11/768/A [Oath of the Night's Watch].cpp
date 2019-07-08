#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    
  IOS
  int n;
  cin>>n;
  ll ans=0;
  vector<ll>v;
  map<ll , ll>m;
  for(int i=0;i<n;i++)
  {
      ll a;
      cin>>a;
      if(!m[a])
      v.pb(a);
      m[a]++;
  }
  sort(v.begin(),v.end());
  for(int i=1;i<(int)v.size()-1;i++)
  ans+=m[v[i]];
  cout<<ans;
}