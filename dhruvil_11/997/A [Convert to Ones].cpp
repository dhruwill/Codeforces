#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS
    ll n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    ll c=0,i;
   ll min=(x>y?y:x);
    for(i=0;i<s.length()-1;i++)
    {
         if(s[i]=='0' &&s[i+1]=='1')c++;
    }
    //cout<<s<<endl;
    if(s[s.length()-1]=='0')c++;
    //cout<<c<<endl;
    if(c==0)cout<<0;
    else
    {
        cout<<(c-1)*min+y;
    }
}