#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
     IOS
     int n,m;
     cin>>n>>m;
     int s=0,a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         s+=a[i];
     }
     sort(a,a+n);
     ll diff=0;
     for(int i=0;i<n;i++)
     {
         diff+=abs(a[i]-a[n-1]);
     }
     if(diff>=m)
     {
         cout<<a[n-1]<<" "<<a[n-1]+m;
         return 0;
     }
     else
     {
         cout<<a[n-1]+(abs(diff-m)/n+(abs(diff-m)%n==0?0:1))<<" "<<a[n-1]+m;
     }
 }