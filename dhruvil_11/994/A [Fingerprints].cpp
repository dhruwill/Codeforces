#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int a[n],b[m],c=0;
    int i,j;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           if(a[i]==b[j])
           {cout<<a[i]<<" ";c=1;}
       }
    }
    if(c==0)
        cout<<endl;

}
