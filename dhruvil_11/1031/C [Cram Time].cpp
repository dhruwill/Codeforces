#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define f first
#define s second
//vector< int > v[100000];
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool vis[1000000];
int coun=1;
//pair cq(ll a,ll b)

int main()
{
    IOS
    //n==1
    ll a,b;
    cin>>a>>b;
    //int b=0;
   // vector<ll>v,v1;
    vector<ll>v;
    ll ans=0;
    ans=1;
    while((ans*(ans+1))/2<=(a+b))
    {
        v.pb(ans);
        ans++;
    }
    int c[(int)v.size()]={0};
    ll x=min(a,b);
    ll y = max(a,b);
    ll c1=0,c2=0;
    for(int i=(int)v.size()-1;i>=0;i--)
    {
        if(x-v[i]>=0)
        {
            x-=v[i];
            c[i]=1;
            c1++;
        }
        
    }
    for(int i=0;i<(int)v.size();i++)
    {
        if(y-v[i]>=0 && c[i]!=1)
        {
            y-=v[i];
            c[i]=2;
            c2++;
        }
    }
    if(min(a,b)==a){
    cout<<c1<<endl;
    for(int i=0;i<v.size();i++)
    if(c[i]==1)
    cout<<v[i]<<" ";
    cout<<endl<<c2<<endl;
    for(int i=0;i<v.size();i++)
    if(c[i]==2)
    cout<<v[i]<<" ";}
    else
    {
        cout<<c2<<endl;
    for(int i=0;i<v.size();i++)
    if(c[i]==2)
    cout<<v[i]<<" ";
    cout<<endl<<c1<<endl;
    for(int i=0;i<v.size();i++)
    if(c[i]==1)
    cout<<v[i]<<" ";
    }
}