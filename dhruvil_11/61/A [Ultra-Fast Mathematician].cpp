#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])
        cout<<1;
        else 
        cout<<0;
    }
}