#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%4!=0)
    {
        cout<<"===";
        return 0;
    }
    else
    {
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            a++;
            else if(s[i]=='G')
            b++;
            else if(s[i]=='C')
            c++;
            else if(s[i]=='T')
            d++;
        }
        //cout<<a<<b<<c<<d<<endl;
        if(a>n/4 || b>n/4 || c>n/4 || d>n/4)
        {
            cout<<"===";
            return 0;
        }
        else
        {
            if(a!=n/4);
            {
             
             for(int i=0;i<n && a!=n/4;i++)
              {
                 if(a!=n/4 && s[i]=='?')
                 {
                     s[i]='A';
                     a++;
                     //cout<<a;
                 }
                 
                 
              }
            }
             if(b!=n/4);
            {
             
             for(int i=0;i<n && b!=n/4;i++)
             {
                 if(b!=n/4 && s[i]=='?')
                 {
                     s[i]='G';
                     b++;
                 }
             }
            }
             if(c!=n/4)
            {
            
             for(int i=0;i<n && c!=n/4;i++)
             {
                 if(c!=n/4 && s[i]=='?')
                 {
                     s[i]='C';
                     c++;
                 }
             }
            }
             if(d!=n/4);
            {
             
             for(int i=0;i<n && d!=n/4;i++)
             {
                 if(d!=n/4 && s[i]=='?')
                 {
                     s[i]='T';
                     d++;
                 }
             }
            }
            cout<<s;
        }
    
    }

}