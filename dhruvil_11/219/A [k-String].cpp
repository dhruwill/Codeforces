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
   int k;
   string s;
   cin>>k>>s;
   for(int i=0;i<s.length();i++)
   {
       c[s[i]-'a']++;
   }
   int as=1;
   for(int i=0;i<26;i++)
   {
       if(c[i]%k!=0)
       as=0;
   }
   if(as==0 || k>s.length())
   {
       cout<<-1;
       return 0;
   }
   else
   {
       //sort(c,c+26,greater<int>());
       string s1="";
       
       for(int i=0;i<26;i++)
       {
           if(c[i]==0)
           continue;
           else
           {
             c[i]/=k;
             while(c[i]--)
             s1+=('a'+i);
           }
           
       }
       while(k--)
       cout<<s1;
   }
}
        