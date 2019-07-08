#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   int n;cin>>n;
  
       string s;
       getline(cin,s);
        while(n--)
   {getline(cin,s);
   if(s.length()<5)
   {
       cout<<"OMG>.< I don't know!\n";continue;
   }
   if(s.substr(0,5)=="miao."&&s.substr(s.length()-5,5)=="lala.")
       {
           cout<<"OMG>.< I don't know!\n";
       }
      else {if(s.substr(0,5)=="miao.")
       {
           cout<<"Rainbow's\n";
       }
      else if(s.substr(s.length()-5,5)=="lala.")
       cout<<"Freda's\n";
       else
       cout<<"OMG>.< I don't know!\n";}
   }
}