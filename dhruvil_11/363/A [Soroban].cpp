#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    ll n;
    cin>>n;
    string s=to_string(n);
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='0')
        cout<<"O-|-OOOO";
        if(s[i]=='1')
        cout<<"O-|O-OOO";
        if(s[i]=='2')
        cout<<"O-|OO-OO";
        if(s[i]=='3')
        cout<<"O-|OOO-O";
        if(s[i]=='4')
        cout<<"O-|OOOO-";
        if(s[i]=='5')
        cout<<"-O|-OOOO";
        if(s[i]=='6')
        cout<<"-O|O-OOO";
        if(s[i]=='7')
        cout<<"-O|OO-OO";
        if(s[i]=='8')
        cout<<"-O|OOO-O";
        if(s[i]=='9')
        cout<<"-O|OOOO-";
        cout<<endl;
        
    }
}