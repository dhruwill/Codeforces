#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,st=0,si=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    if(s[i]=='x')
    si++;
    st=n-si;
    if(st==si)
    {
        cout<<0<<"\n"<<s;
        return 0;
    }
    else
    {if(st>si)
    {int c=0;
        for(int i=0;i<n && si!=st;i++)
        {
            if(s[i]=='X')
            {s[i]='x';si++;st--;c++;}
            
        }
        cout<<c<<"\n"<<s;
    }
    if(si>st)
    {int c=0;
        for(int i=0;i<n && st!=si;i++)
        {
            if(s[i]=='x')
            {s[i]='X';st++;si--;c++;}
            
        }
        cout<<c<<"\n"<<s;
    }
    }
}