#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    IOS
    
  int n,m;
  cin>>n>>m;
  int a[n];
  int c=0,d=0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      if(a[i]==1)
      c++;
      else
      d++;
  }
  while(m--)
  {
      int a,b;
      cin>>a>>b;
      if((b-a+1)%2!=0)
      {
          cout<<0<<"\n";
          continue;
      }
      else
      {
          int y = (b-a+1)/2;
          if(c>=y && d>=y)
          cout<<1<<"\n";
          else
          cout<<0<<"\n";
      }
      
  }
  
  
}