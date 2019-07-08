#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
     IOS
     ll n,a=1000000000,b=1000000000,c=1000000000,d=1000000000,e=1000000000,f=1000000000,g=1000000000,h=1000000000;
     cin>>n;
     map< string ,ll > m;
     m.clear();
     while(n--)
     {
         ll x;
         string s;
         cin>>x>>s;
         sort(s.begin(),s.end());
         if(m[s]==0)
         m[s]=x;
         else
         m[s]=min(m[s],x);
     }
     if(m["C"]!=0 && m["AB"]!=0)
     a=m["C"]+m["AB"];
     if(m["A"]!=0 && m["BC"]!=0)
     b=m["A"] + m["BC"];
      if(m["B"]!=0 && m["AC"]!=0)
      c=m["B"]+m["AC"];
      if(m["AB"]!=0 && m["BC"]!=0)
      d=m["AB"]+ m["BC"];
      if(m["AB"]!=0 && m["AC"]!=0)
      e=m["AB"]+ m["AC"];
      if(m["BC"]!=0 && m["AC"]!=0)
      f=m["BC"]+ m["AC"];
      if(m["ABC"]!=0)
      g=m["ABC"];
      if(m["A"]!=0 && m["B"]!=0 && m["C"]!=0)
      h=m["A"]+ m["B"]+ m["C"];
      if(a==1000000000 &&b==1000000000 &&c==1000000000 &&d==1000000000 &&e==1000000000 &&f==1000000000 &&g==1000000000 &&h==1000000000 )
      {
          cout<<-1;
          return 0;
      }
      cout<<min(a,min(b,min(c,min(d,min(e,min(g,min(h,f)))))));
 }
 