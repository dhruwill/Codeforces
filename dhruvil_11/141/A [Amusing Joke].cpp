#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    
    cin>>s1;
    cin>>s2;
    cin>>s3;
    s1=s1+s2;
    int a[26]={0},b[26]={0},t=1,i;
    for(i=0;i<s1.length();i++)
    {
        a[s1[i]-65]++;
    }
    for(i=0;i<s3.length();i++)
    {
        b[s3[i]-65]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"NO";t=0;break;
        }
    }
    if(t==1)
    cout<<"YES";
}