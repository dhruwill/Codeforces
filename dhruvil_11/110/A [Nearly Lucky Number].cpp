#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    string s;
    cin>>s;
    int a=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='7'|| s[i]=='4')
        a++;
    }
    string s2=to_string(a);
    //cout<<s2;
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]!='4' && s2[i]!='7')
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}