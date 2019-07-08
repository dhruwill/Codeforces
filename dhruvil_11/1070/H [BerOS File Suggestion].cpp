#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define vl vector<long long>
#define inf (1LL<<61)
#define vi vector<int>
#define vvi vector< vector<int> >
#define vvl vector< vector<long long> >
#define vpi vector< pair<int,int> >
#define vpl vector< pair<ll,ll> >
#define all(v) v.begin(),v.end()
#define pb(x) push_back(x)
#define all(v) v.begin(),v.end()
#define N 1000000
ll n,q;
string s;

set<string>a;
map<string,ll>ans;
map<string,string>ans2;
int main()
{
IOS

cin>>n;

for(int i=0;i<n;i++)
{
    cin>>s;

    for(int j=0;j<s.size();j++)
    {
        string tmp;
        for(int k=j;k<s.size();k++)
        {
            tmp.push_back(s[k]);
            a.insert(tmp);
            ans2[tmp]=s;
        }
    }
    for(auto u : a)
    {
        ans[u]++;
    }
    a.clear();
}
cin>>q;
while(q--)
{
    cin>>s;
    if(ans[s]>0)
    {
        cout<<ans[s]<<" "<<ans2[s]<<endl;
    }
    else
        cout<<0<<" "<<'-'<<endl;
}



    return 0;
}
