#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    
  string  v[126];
  string s;
  cin>>s;
  for(int i=0;i<=1000;i+=8)
  {
      v[i/8]=to_string(i);
  }
  //cout<<v[0][0];
  for(int i=0;i<=125;i++)
  {
      ll coun=0;
      for(int j=0;j<s.length();j++)
      {
          if(s[j]==v[i][coun])
          {
              coun++;
          }
          if(coun==v[i].length())
          {
              cout<<"YES"<<endl;
              cout<<v[i];
              return 0;
              
          }
      }
  }
  cout<<"NO";
}