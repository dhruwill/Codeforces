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
int main()
{
    IOS
   int n;
   cin>>n;
   map< string ,int >m;
   m.clear();
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
       m[s]++;
       if(m[s]==1)
       cout<<"NO"<<"\n";
       else
       cout<<"YES\n";
   }
}