#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    sort(s.begin(),s.end());
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='+'&& i!=s.length()-1)
        cout<<s[i]<<"+";
        else if(i==s.length()-1)
        cout<<s[i];
    }
}