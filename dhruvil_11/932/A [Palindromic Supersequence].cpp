#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  string s;
  cin>>s;
  string s1=s;
  reverse(s1.begin(),s1.end());
  s1+=s;
  cout<<s1;
}
   