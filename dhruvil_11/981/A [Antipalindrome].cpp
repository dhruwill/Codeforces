#include<bits/stdc++.h>
using namespace std;
int checkpalin(string s,int n)
{
    int i;
    int c=0;
    for(i=0;i<=n/2;i++)
       {

        if(s[i]!=s[n-i-1])
    {
        c=1;
        return 0;
    }
       }
    if(c==0)
        return 1;
}
int main()
{
    string s;
    cin>>s;
    int i,c=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=s[0])
        {
            c=1;
        }


    }
    if(c==0)
        cout<<0;
    if(c==1)
    {
      if(checkpalin(s,s.length())==1)
            cout<<(s.length()-1);
      else cout<<s.length();
    }


}
