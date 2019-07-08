#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    ll max=-1;
    int c[n+1]={0};
    for(int i=1;i<=m;i++)
    {
        int in;max=-1;
        for(int j=1;j<=n;j++)
        {
            ll a;
            cin>>a;
            if(max<a)
            {
                max=a;
                in=j;
            }
        }
        c[in]++;//cout<<c[in]<<" "<<in<<endl;
    }max=-1;int in;
    for(int i=1;i<=n;i++)
    {
        if(c[i]>max)
        {
            max=c[i];in=i;
        }
    }
    cout<<in;
    
    
}