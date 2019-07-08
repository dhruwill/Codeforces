#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   IOS 
   string s1,s2;
   cin>>s1>>s2;
   if(s1.length()!=s2.length())
   {
       cout<<"NO";
       return 0;
   }
   else
   {
       
       char x;
       int j1,j2=0,i;
       for( i=0;i<s1.length();i++)
       {
           if(s1[i]!=s2[i])
           {
               j1=i;break;
           }
       }//cout<<i;
       for(int t=i+1;t<s1.length();t++)
       {
           if(s1[t]!=s2[t])
           {
               j2=t;
               break;
               
           }
       }
       if(j2==0)
       {
           cout<<"NO";
       return 0;
       }
       x=s1[j1];
       s1[j1]=s1[j2];
       s1[j2]=x;
       if(s1==s2)
       {
           cout<<"YES";
           
       }
       else
       {
           cout<<"NO";
       }
   }
}