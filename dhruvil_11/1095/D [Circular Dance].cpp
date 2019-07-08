#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
vector< int >v[200001];
int check(int a,int b)
{
    if(!(v[a][0]==b || v[a][1]==b))
    return 2;
    else
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(n<=3)
    {
        while(n--)
        cout<<n+1<<" ";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v[i].pb(a-1);
        v[i].pb(b-1);
    }
    int a[n]={-1};
    for(int i=0;i<n;i++)
    {
        
        if(check(v[i][0],v[i][1])==1)
        {
            a[i]=v[i][0];
        }
        else
        a[i]=v[i][1];
        
    }
    int x =0 ;
    while(n--)
    {
        cout<<a[x]+1<<" ";
        x=a[x];
    }
}