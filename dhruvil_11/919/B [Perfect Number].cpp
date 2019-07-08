#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
   long long int c=10,d,t=0,sum=0;
  while(1)
  {
      c+=9;
      d=c;
      while(d>0)
      {
          sum+=d%10;
          d/=10;
      }
      if(sum==10)
      
          t++;
          sum=0;
          if(t==n)
          {
              cout<<c;
              break;
          }
      
  }
  
}