#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n;
    cin>>n;
   lli a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    sort(a,a+n);
   lli s=0,d=0;
    for(i=0;i<n;i++)
    {
        if(s<=a[i])
        {
         s+=a[i];
         d++;
        }
       
    }
    cout<<d;
    
}