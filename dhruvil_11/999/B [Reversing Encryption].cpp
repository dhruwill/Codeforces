#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   char s[n];
   cin>>s;
   
    
    int a[n];
    int i,j=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a[j]=i;j++;
        }
    }
  
    for(i=0;i<j;i++)
    {
        if(a[i]==1)continue;
        else if(a[i]==2)
        {
            char  x=s[0];s[0]=s[1];s[1]=x;
        }
        else{
            for(int t=0;t<=(a[i]-1)/2;t++)
        {
            char x;x=s[t];
            s[t]=s[a[i]-t-1];
            s[a[i]-t-1]=x;
            
        }
            
        }
    }
    cout<<s;
    
    
}