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
int main()
{
    IOS
    //n==1
    int n;
    cin>>n;
    vector< ll > v;
    map< ll , ll >m,m1;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        m[abs(a)]++;
        v.pb(abs(a));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
       m1[v[i]]=i;
    }
        ll cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {
                    continue;
        }
        int j = lower_bound(v.begin(),v.end(),2*v[i])-v.begin();
        
        if(j==v.size() || v[j]>2*v[i])
            j--;
       
        if(v[i]!=v[j])
        cnt+=(m1[v[j]]-m1[v[i]]);
       
        }
    for(auto it = m.begin();it!=m.end();it++)
    {
        if(it->first!=0)
        {
            cnt+=(it->second*(it->second-1))/2;
        }
    }
    cout<<cnt;
}