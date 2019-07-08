#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n,a,b,i;
    cin>>n;
    vector< pair<int ,int> > v;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int best=-1;
    for(i=0;i<n;i++)
    {
        if(best<=v[i].second)
            best=v[i].second;
        else best=v[i].first;
       // cout<<v[i].first<<" "<<v[i].second<<" "<<best<<endl;
    }
    cout<<best;
}
