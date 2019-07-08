#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;cin>>k;
    char s[n];
    int a[26]={0};int i,j;
    for( i=0;i<n;i++)
    {
        cin>>s[i];
        a[s[i]-'a']++;
    }
    int c=0;
    if(k>=n)cout<<endl;
    else{
    for(i=0;i<26;i++)
    {
        if(a[i]<1)
        continue;
        else
        {
            for(j=0;j<n && c<k;j++)
            {
                if(s[j]==(i+'a'))
                {
                    s[j]=' ';c++;
                }
            }
            if(c>=k)break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==' ')continue;
        else cout<<s[i];
    }}
}