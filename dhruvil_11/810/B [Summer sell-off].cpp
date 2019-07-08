#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool sortinrev(const pair<int,int> &a, 
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

int main()
{
    IOS
    int n,f;
    cin>>n>>f;
    ll a[n],b[n],c[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]>b[i])
        sum+=b[i];
        else
        sum+=a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(2*a[i]>b[i])
        {
            c[i]=b[i];
            if(b[i]>a[i])
            c[i]-=a[i];
            else
            c[i]-=b[i];
        }
        if(2*a[i]<=b[i])
        {c[i]=2*a[i];
        if(b[i]>a[i])
            c[i]-=a[i];
            else
            c[i]-=b[i];}
    }
    sort(c,c+n,greater<int>());
    for(int i=0;i<f;i++)
    {
        sum+=c[i];
    }
    cout<<sum;
}