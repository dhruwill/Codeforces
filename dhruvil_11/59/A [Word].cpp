#include<bits/stdc++.h>
using namespace std;
#define pi pair<ll,ll>
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define frep(i,n) for(int i=1;i<=n;i++)
#define vll vector <pair < ll ,ll> >
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    string s;
    cin>>s;
    int c=0,d=0;
    rep(i,s.length())
    {
        if(s[i]>=65 && s[i]<=90)
        c++;
        else
        d++;
    }
    //cout<<c<<" "<<d<<endl;
   if(c>d)
   
   {std::locale loc;
       rep(i,s.length())
       {
           if(s[i]>='a')
           std::cout << std::toupper(s[i],loc);
           else
           cout<<s[i];
           
       }
   }
   else
   {std::locale loc;
       rep(i,s.length())
       {
           if(s[i]<'a')
           std::cout << std::tolower(s[i],loc);
           else
           cout<<s[i];
           
       }
   }
   
}
