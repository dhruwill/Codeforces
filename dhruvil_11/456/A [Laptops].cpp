#include<bits/stdc++.h>
using namespace std;
bool sort1(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int i;
    vector< pair < int ,int> >v;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        v.push_back(make_pair(a[i],b[i]));
        
    }
    sort(v.begin(),v.end(),sort1);
    for(i=0;i<n;i++)
    {
        if(v[i].first>v[i].second)
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
}