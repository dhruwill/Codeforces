#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='U'&&s[i+1]=='R')
        {
            n--;i++;
        }
        else if(s[i]=='R'&&s[i+1]=='U')
        {
            n--;i++;
        }

    }
    cout<<n;
}
