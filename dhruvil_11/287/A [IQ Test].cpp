#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS
    char a[5][5];
    int i,j;
    for(i=1;i<=4;i++)
    for(j=1;j<=4;j++)
    cin>>a[i][j];
    for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
    {
        if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j])
        {
            cout<<"YES";
            return 0;
        }
         if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j+1])
        {
            cout<<"YES";
            return 0;
        }
         if(a[i][j]==a[i+1][j+1] && a[i+1][j]==a[i][j])
        {
            cout<<"YES";
            return 0;
        }
         if(a[i+1][j]==a[i][j+1] && a[i+1][j]==a[i+1][j+1])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    
        
    }