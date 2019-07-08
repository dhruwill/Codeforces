#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    if(s.length()<k+1)
    cout<<s.length()-1;
    else
    {
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
        if(s[i]=='0')a++;
        if(a<k)cout<<s.length()-1;
        else{a=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!='0')
            {
                a++;
            }
            if(s[i]=='0')
            b++;
            if(b==k)
            break;
        }
        cout<<a;}
    }
}