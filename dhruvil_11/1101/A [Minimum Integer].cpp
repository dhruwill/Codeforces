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
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c<a)
        {
            cout<<c<<endl;
            continue;
        }
        
       else if(c>b)
        {
            cout<<c<<endl;
            continue;
        }
        else
        {
            ll x = ceil((double)b/c);
            if(b%c==0)
            {x*=c;x+=c;}
            else
            x*=c;
            cout<<x<<endl;
        }
    }
    
}