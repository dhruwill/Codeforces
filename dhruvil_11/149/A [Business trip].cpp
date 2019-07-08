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
int c[26];
int main()
{
   int n;
   cin>>n;
   int a[12];
   rep(i,12)
   cin>>a[i];
   sort(a,a+12,greater<int>());
   if(n==0)
   cout<<0;
   else
   {
       int t=0;
       for(int i=0;i<12;i++)
       {
           t+=a[i];
           if(t>=n)
           {
               cout<<i+1;
               return 0;
           }
       }
       cout<<-1;
   }
}
        