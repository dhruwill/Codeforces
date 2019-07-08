#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    int t=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H'|| s[i]=='Q' || s[i]=='9')
        t=1;
    }
    if(t)
    cout<<"YES";
    else
    cout<<"NO";
}