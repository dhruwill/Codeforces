
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int a,b,x,i;
    cin>>a>>b>>x;
    if(x==1)
    {
        for(i=1;i<=a;i++)cout<<0;
        for(i=0;i<b;i++)cout<<1;
    }
    
    else{
    if(a>b)
    {
        for(i=0;i<x;i++)
        {
            cout<<i%2;
        }
        if((x-1)%2==0)
        {
            b-=(x-1)/2;a-=((x-1)/2+1);
            
            for(i=1;i<=a && a>0;i++)
                cout<<0;
            for(i=1;i<=b && b>0;i++)
                cout<<1;
        }
        else
        {
            
            a-=((x-1)/2+1);b-=((x-1)/2+1);
            for(i=1;i<=b && b>0;i++)
                cout<<1;
            for(i=1;i<=a && a>0;i++)
                cout<<0;

        }
    }
        else
        {
            for(i=0;i<x;i++)
        {
            cout<<(i+1)%2;
        }
        if((x-1)%2==0)
        {
            a-=(x-1)/2;b-=((x-1)/2+1);
            //cout<<a<<b<<endl;
            for(i=1;i<=b && b>0;i++)
                cout<<1;
            for(i=1;i<=a && a>0;i++)
                cout<<0;
        }
        else
        {
            a-=((x-1)/2+1);b-=((x-1)/2+1);
            for(i=1;i<=a && a>0;i++)
                cout<<0;
            for(i=1;i<=b && b>0;i++)
                cout<<1;

        }
        }}


    }
