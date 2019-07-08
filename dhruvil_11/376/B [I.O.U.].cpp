#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1]={0};
    int c;
    for(int i=0;i<m;i++)
    {
        int d,e;
        cin>>d>>e>>c;
        a[d]-=c;
        a[e]+=c;
    }c=0;
    for(int i=0;i<=n;i++)
    {
        if(a[i]>=0)
        c+=a[i];
        
    }
    cout<<c;
}