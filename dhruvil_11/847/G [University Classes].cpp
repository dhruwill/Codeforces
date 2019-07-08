#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int t[8]={0};
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            t[j+1]+=(int)s[j]-48;
        }
    }
    cout<<max(t[1],max(t[2],max(t[3],max(t[4],max(t[5],max(t[6],t[7]))))));
}