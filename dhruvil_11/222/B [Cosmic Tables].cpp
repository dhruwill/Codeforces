#include<bits/stdc++.h>
using namespace std;


#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,m,k;
    cin>>n>>m>>k;
    int r[n+1],c[m+1],i;
    
    int a[n+1][m+1];
    for(i=1;i<=n;i++)
    {r[i]=i;
    for(int j=1;j<=m;j++)
    {
        c[j]=j;
        cin>>a[i][j];
    }}
    char d;
        int a1,a2;
        int t;
    while(k--)
    {
        
        cin>>d>>a1>>a2;
        if(d=='g')
        cout<<a[r[a1]][c[a2]]<<endl;
        else if(d=='r')
        {
           t=r[a1];
            r[a1]=r[a2];
            r[a2]=t;
        }
        else
        {
              t=c[a1];
            c[a1]=c[a2];
            c[a2]=t;
        }
        
    }
}