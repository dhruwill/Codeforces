#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    int a[s.length()];
    long long int sum=0,p=0;
    for(i=0;i<s.length();i++)
    {
        a[i]=int(s[i]-48);
        sum+=a[i];
    }
    if(s.length()==1)
        cout<<0;
    else
    {
        if(sum<=9)cout<<1;
        else
        {
            while(sum>0)
            {
                p+=sum%10;
                sum/=10;
            }
            sum=p;
            if(sum<=9)cout<<2;
            else
            {
                p=0;
                while(sum>0)
            {
                p+=sum%10;
                sum/=10;
            }
            sum=p;
            if(sum<=9)cout<<3;
            else
            {
                 p=0;
                while(sum>0)
            {
                p+=sum%10;
                sum/=10;
            }
            sum=p;
            if(sum<=9)cout<<4;
            }

            }
        }

    }
}

