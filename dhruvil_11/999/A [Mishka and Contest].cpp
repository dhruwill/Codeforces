#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    int k;
    cin>>n;cin>>k;
    int i,c=0,d=0;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int l=0;int h=n-1;
   while(l<n && h>=0 )
    {
       if(k>=a[l]||k>=a[h])
       {
           c++;
           if(a[l]<=k)
           {
               l++;
           }
           else if (a[h]<=k)
           h--;
           
            
       }
       else
       {
           cout<<c<<endl;d=1;break;
       }
       if(c==n)
       break;
       
    }
    if(d==0)cout<<c<<endl;
}