#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int c[100000];
int main()
{
    IOS
   int n;
   cin>>n;
   ll a[n];
   ll w=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       
   }int d=1;ll x=1;
   for(int i=1;i<n;i++)
   {
       if(a[i]==a[i-1])
       {
           x++;
           
       }
       else
       {
           w+=(x*(x+1))/2;
           x=1;
       }
   }
   cout<<w+(x*(x+1))/2;
}
   