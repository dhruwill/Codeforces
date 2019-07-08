#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],m,n,i,j;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);
        if(a[i][j]==1)
        {
            m=i;n=j;
        }
        
    }
    cout<<((abs(m-2))+(abs(n-2)));
}