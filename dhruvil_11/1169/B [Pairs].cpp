#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.first==b.first)
        return (a.second < b.second);
    return (a.first < b.first);
}
int main()
{
    IOS
    //n==1
    int n,m;
    cin>>n>>m;
    if(m==1)
    {
        cout<<"YES";
        return 0;
    }
    vector< pair< int,int> >v;
    int cnt[n+1]={0},cnt1[n+1]={0};
    int x,y;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;

        v.pb({a,b});
    }
    //sort(v.begin(),v.end(),sortbysec);
    int val=1e9;
    int flag=0;
    vector< pair < int ,int> > v1,v2;
    int val1 = v[0].first;
    int val2 = v[0].second;
   // cout<<val1<<" "<<val2;
    for(int i=1;i<m;i++)
    {
        if(v[i].first!=val1 && v[i].second!=val1)
            v1.pb({v[i].first,v[i].second});
        if(v[i].first!=val2 && v[i].second!=val2)
            v2.pb({v[i].first,v[i].second});
    }
  // cout<<v1.size()<<" "<<v2.size()<<"--1\n";
    for(int i=0;i<v1.size();i++)
    {
        cnt[v1[i].first]++;
        if(v1[i].first!=v1[i].second)
            cnt[v1[i].second]++;
    }
    for(int i = 1;i<=n;i++)
        if(cnt[i] == v1.size())
           { flag=1;}
    for(int i=0;i<v2.size();i++)
    {
        cnt1[v2[i].first]++;
        if(v2[i].first!=v2[i].second)
            cnt1[v2[i].second]++;
        
    }
    for(int i = 1;i<=n;i++)
        if(cnt1[i] == v2.size())
            { flag=1;}
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";


}