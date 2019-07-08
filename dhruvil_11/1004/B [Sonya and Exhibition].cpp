#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    ll n,m,i,j,a,b;
    string s;
    cin>>n>>m;
    vector< pair< int, int> >v;
    for(i=0;i<m;i++)
    {   cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
   /* for(i=0;i<m;i++)
    {
        for(j=v[i].first-1;j<=v[i].second-1;j++)
        {
            if(s[j]=='0'|| s[j]=='1')
            continue;
            if(j==0)s+='0';
            else if(j!=0 && s[j-1]=='0')
            s+='1';
            else if(j!=0 && s[j-1]=='1')
            s+='0';
        }
    }*/
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        s+='1';
        else
        s+='0';
    }
    cout<<s;}
    
    