#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n;
    cin>>n;
    lli a[n],i,j,l=0,r=n-1,c=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            l=i;
            break;
        }
    }
    for(i=l;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            r=i;
            c=1;
            break;
            
        }
    }
    if(c==0)
    r=n-1;
    if((r-l) == 1)
    {
        lli t=a[l];
        a[l]=a[r];
        a[r]=t;
        lli m=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            m=1;
            cout<<"no";
            break;
        }
    }
    if(m==0)
    {cout<<"yes"<<"\n"<<l+1<<" "<<r+1;
    
    }
    }
    else
    {
    for(i=l;i<=(l+r)/2;i++)
    {
        lli t=a[i];
        a[i]=a[l+r-i];
        a[l+r-i]=t;
    }
   lli m=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            m=1;
            cout<<"no";
            break;
        }
    }
    if(m==0)
    {cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1;
    }
    
    }
    
    
    
}