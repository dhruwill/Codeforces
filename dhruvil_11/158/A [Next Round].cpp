#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS
    int n,k,i,c=0;
    cin>>n>>k;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>=a[k] && a[i]!=0)
        c++;
    }
    cout<<c;
}