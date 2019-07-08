#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    long long int a[n],b[m];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<m;i++)
    cin>>b[i];
    vector< pair< ll , pair <  ll ,ll >  > > v;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            v.push_back(make_pair(a[i]*b[j],make_pair(i,j)));
        }
    }
    sort(v.begin(),v.end());
    
    for(i=n*m-2;i>=0;i--)
    {
        if(v[n*m-1].second.first==v[i].second.first)// v[n*m-1].second.second==v[i].second.second)
        continue;
        else
        {
            cout<<v[i].first;
            break;
        }
    }
}