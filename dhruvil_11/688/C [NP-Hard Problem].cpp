#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int grp[100001];
vector< int>v[100001];
int main()
{
    int n,e;
    scanf("%d %d",&n,&e);
    while(e--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        v[x].pb(y);
        v[y].pb(x);

    }
    for(int j=1;j<=n;j++)
    if(grp[j]==0){
    int q[100001],t=0,r=0;
    q[r++]=j;
    grp[j]=1;
    while(t!=r)
    {
        int p =q[t];
        t++;
        for(int i=0;i<(int)v[p].size();i++)
        {
            if( !grp[v[p][i]])
            {
                q[r++]=v[p][i];
                grp[v[p][i]]=3-grp[p];
            }
            else if( grp[v[p][i]]==grp[p])
            {
                printf("-1");
                return 0;
            }

        }

    }}
    int ans=0;
    for(int i=1;i<=n;i++)
        if(grp[i]==1)
        ans++;
        printf("%d\n",ans);
    for(int i=1;i<=n;i++)
        if(grp[i]==1)
        printf("%d ",i);
        ans=0;
    printf("\n");
    for(int i=1;i<=n;i++)
        if(grp[i]==2)
        ans++;
        printf("%d\n",ans);
    for(int i=1;i<=n;i++)
        if(grp[i]==2)
        printf("%d ",i);

}
