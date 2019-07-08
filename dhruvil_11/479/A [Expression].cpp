#include<bits/stdc++.h>
using namespace std;
#define pi pair<ll,ll>
#define pb push_back
#define eb emplace_back
#define rep(i,n) for(int i=0;i<n;i++)
#define frep(i,n) for(int i=1;i<=n;i++)
#define vll vector <pair < ll ,ll> >
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define watch(x) cout << (#x) << " is " << (x) << endl;
//const double pi = 2 * acos(0.0);

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    IOS
   int a[3];
   cin>>a[0]>>a[1]>>a[2];
   if(a[0]!=1 && a[1]!=1 && a[2]!=1)
   cout<<a[0]*a[1]*a[2];
   else
   {
     if(a[0]==1 && a[1]==1 && a[2]==1)
     cout<<3;
     else
     {
         cout<<max((a[0]+a[1])*a[2],max(a[0]*(a[1]+a[2]),a[0]+a[1]+a[2]));
     }
   }
   
  
}