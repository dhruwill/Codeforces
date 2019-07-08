#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    
  string s1,s2;
  cin>>s1>>s2;
  int a[26]={0},b[26]={0};
  int x1=0,x2=0,x3=0;
  for(int i=0;i<s1.length();i++)
  a[s1[i]-'a']++;
  for(int i=0;i<s2.length();i++)
  b[s2[i]-'a']++;
  if(s1.length()==s2.length())
  {
      x2=1;
      for(int i=0;i<26;i++)
      if(a[i]!=b[i])
      x3=1;
  }
  else
  {
      x1=1;
      if(s1.length()<s2.length())
      x3=1;
      for(int i=0;i<26;i++)
      if(b[i]>a[i])
      x3=1;
      int count=0;
      for(int i=0;i<s1.length();i++)
      if(s1[i]==s2[count])
      count++;
      if(count!=s2.length())
      x2=1;
      
  }
  if(x3==1)
  cout<<"need tree";
  else
  {
      if(x1 && !x2)
      cout<<"automaton";
      if(!x1 && x2)
      cout<<"array";
      if(x1 && x2)
      cout<<"both";
  }
  
}