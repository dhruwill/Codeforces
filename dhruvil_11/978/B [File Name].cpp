#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
int main()
{
    IOS
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length()-2;i++)
    {
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
        c++;
    }
    cout<<c;
}