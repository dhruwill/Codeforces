#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t,a,b,da,db,i,d,j,c=0;
    cin>>x>>t>>a>>b>>da>>db;
    int y[t]={0},z[t]={0};
    if(x==0)
    cout<<"YES";
    else{
    for(i=0;i<t;i++)
    {
        y[i]=a-i*da;
        if(y[i]==x)
        {cout<<"YES";
        c=1;
        break;}
    }
    for(i=0;i<t;i++)
    {
        if(c==0)
        {
            z[i]=b-i*db;
            if(z[i]==x)
            {
                cout<<"YES";
                c=1;
                break;
            }
        }
        
    }
    
    
    if(c==0)
    {for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            if(x==(y[i]+z[j]))
            {
                c=1;
            }
        }
    }
    if(c==1)
    cout<<"YES";
    else
    cout<<"NO";}}
}
 