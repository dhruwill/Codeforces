#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    ll n;
    cin>>n;
    ll i;
    vector< pair <ll , ll> >v;
    for(i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x>y)
        v.push_back(make_pair(x,y));
        else
                v.push_back(make_pair(y,x));

    }
   ll max=v[0].first;
    for(i=1;i<n;i++)
    {
        if (v[i].first<=max)
        max=v[i].first;
        else if(v[i].second<=max)
        max=v[i].second;
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
