#include<bits/stdc++.h>
using namespace std;
bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}
int main()

{
    int n,s;
    cin>>n>>s;
    int x[n],y[n],i;
    int max=-1;
    
    vector< pair < int ,int> >v;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        if(y[i]==0)
        v.push_back({x[i],y[i]});
        else
        v.push_back({x[i],100-y[i]});
    }
    sort(v.begin(),v.end(),sortbysecdesc);
    for(i=0;i<n;i++)
    {
        if(s>v[i].first)
        if(max<v[i].second)
        {
            cout<<v[i].second;
            return 0;
        }
        if(s==v[i].first)
        if(max<0 && v[i].second==0)
        max=0;
    }
    if(max!=-1)
    cout<<0;
    else
    cout<<-1;
    
}