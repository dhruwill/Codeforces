#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,s=0;
    cin>>n;
    string a,b;
    cin>>a>>b;ll c=0;
    vector< pair < ll ,ll> >v;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i] && c==0)
        {
            v.push_back({i,0});
            c++;
        }
        else if (a[i]!=b[i] && c!=0)
        {
            if(a[i]!=a[v[c-1].first])
            {
                if(abs(i-v[c-1].first)==1 && v[c-1].second==0)
                {
                    v.push_back({i,1});
                    v[c-1].second=1;c++;
                }
                else
            {
                 v.push_back({i,0});c++;
            }
            }
            else
            {
                 v.push_back({i,0});c++;
            }
        }
    }c=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].second==1)
        c++;
        else
        s+=1;
    }
    cout<<s+c/2;
    
    
    
}