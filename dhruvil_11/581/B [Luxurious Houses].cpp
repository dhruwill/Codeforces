#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n;
    cin>>n;
    lli i,a[n],b[n],j,max=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
       {
           b[i]=0;
           max=a[n-1];
       }
        else
        {
            if(a[i]<=max)
         {
              b[i]=max-a[i]+1;
         }
             else
             {
                max=a[i];
             b[i]=0;
             }
             
             
         
         
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}