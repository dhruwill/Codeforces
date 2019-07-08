#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,i,j=1,c=0;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=m;i++)
        cin>>b[i];
    for(i=1;i<=n && j<=m;i++ )
    {
        if(b[j]>=a[i])
            {j++;c++;}


    }
    cout<<c;

}
