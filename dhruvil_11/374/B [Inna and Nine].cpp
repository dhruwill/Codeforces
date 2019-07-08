#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int main()
 {
    string s;
    cin>>s;
    ll c=0;
    ll ans=1;
    for(int i=0;i<s.length()-1;i++)
    {
        if((int)s[i]+(int)s[i+1]-96==9)
        {c++;}
        else
        {
            if(c%2==0)
            ans*=(c/2+1);
            c=0;
        }
    }
    //cout<<c;
    if(c!=0)
    {
        if(c%2==0)
       ans*=(c/2+1);
    }
    cout<<ans;
    
 }