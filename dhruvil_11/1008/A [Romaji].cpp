
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'&& s[i]!='n')
        {
            if(s[i+1]!='a'&& s[i+1]!='e'&& s[i+1]!='i'&& s[i+1]!='o'&& s[i+1]!='u')
            {
                cout<<"NO";
                return 0;

            }

        }
    }
    if(s[0]!='a'&& s[0]!='e'&& s[0]!='i'&& s[0]!='o'&& s[0]!='u'&& s[0]!='n' && s.length()==1)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
}
