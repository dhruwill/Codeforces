#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios__sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    string s1,s2;
    ll i,j,c=0;
    cin>>s1>>s2;
    if(s1==s2)
    cout<<0;
    else 
    {
       c=s1.length()+s2.length();
               int d=1;
                i=s1.length();
                j=s2.length();
               while(d==1)
               {
                 if(s1[i-1]==s2[j-1])
                 {
                     d=1;
                     c-=2;i--;j--;
                     if(i==0 || j==0)
                     {cout<<c;return 0;}
                 }
                 else
                 {
                     cout<<c;return 0;
                 }
               }
}}