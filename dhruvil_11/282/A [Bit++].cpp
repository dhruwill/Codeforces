#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    
    while(n--)
    {
      string s;
      cin>>s;
      if(s[1]=='+')
      x++;
      else
      x--;
    }
    cout<<x;
}