#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector< pair < ll, ll> >v;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());
    ll a[n];
    a[v[0].second]=v[0].first;
    ll max=1;
    
    for(int i=0;i<n;i++)
    {
        if(v[i].first<=max)
        {
        	a[v[i].second]=max;
        	max++;
        }
        else
        {
        	a[v[i].second]=v[i].first;
        	max=v[i].first+1;
        }
        
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" "; 
}