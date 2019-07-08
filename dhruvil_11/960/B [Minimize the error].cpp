#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    IOS
    ll n,k1,k2,s=0,i,j;
    cin>>n>>k1>>k2;
    ll a[n],b[n];
   // vector< pair< ll, pair <ll ,ll> >
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    cin>>b[i];
    ll c[n];
    for(i=0;i<n;i++)
    {
        c[i]=abs(a[i]-b[i]);
    }
    sort(c,c+n,greater<int>());
    i=0;
    int tot=k1+k2;
    while(tot>0)
    {
        if(c[0]!=0)
        c[0]--;
        else
        {
            if(tot%2==0 && tot>=2)
            tot=0;
            else if(tot%2!=0 )
            tot=1;
            if(tot==1)
            {c[0]--;tot=0;}
        }
        sort(c,c+n,greater<int>());
        tot-=1;
        
        
    }
    for(i=0;i<n;i++)
    {
        s+=pow(c[i],2);
    }
    cout<<s;
}
    