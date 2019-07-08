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
   ll a[n];
   if(n==1)
   {cout<<0;return 0;}
   
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       
   }
   sort(a,a+n);
   cout<<a[n-1]-a[0]+1-n;
}
   