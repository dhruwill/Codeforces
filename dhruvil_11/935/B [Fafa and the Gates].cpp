#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
   lli n;
    cin>>n;
    char s[n];
    cin>>s;
   lli y=0,x=0,i,c=0,t[n]={0};
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='U')
            {
                y++;
                if(y>x)
                t[i]=1;
                if(y==x)
                {
                    t[i]=t[i-1];
                }
            }
        if(s[i]=='R')
            {
                x++;
                if(y>x)
                t[i]=1;
                if(y==x)
                {
                    t[i]=t[i-1];
                }
            }

    }
    for(i=1;i<n;i++)
    {
        if(t[i]!=t[i-1])
        c++;

    }
        cout<<c;
}
