#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   int sum=0;
   int c=0,d;
   int ans=0;
   sort(a,a+n);
   while(c<n)
   {
      ans++;d=0;
      for(int i=0;i<n;i++)
      {
          if(a[i]>=d && a[i]!=-1)
          {
              d++;
              c++;
              a[i]=-1;
          }
      }
   }
   cout<<ans;
   
}