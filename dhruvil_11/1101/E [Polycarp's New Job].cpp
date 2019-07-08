#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define f first
#define s second
//vector< int > v[100000];
bool sortbysec(const pair< pair< ll,ll >,ll> &a,
              const pair< pair < ll,ll >,ll> &b)
{
    return (a.first.first < b.first.first);
}
bool vis[1000000];
int coun=1;
//pair cq(ll a,ll b)

int main()
{
    IOS
    //n==1
    int n;
    cin>>n;
    ll mi=1000000001;
    ll ma=0;
    int flag=0;
    while(n--)
    {
        ll a,b;
        char c;
        cin>>c>>a>>b;
        if(c=='+')
        {
            if(mi>min(a,b) && flag==0)
            {mi=min(a,b);flag=1;}
            if(flag==1)
            {
                if(mi<min(a,b))
                mi=min(a,b);
            }
            if(ma<max(a,b))
            ma=max(a,b);
        }
        if(c=='?')
        {
            if(mi<=min(a,b) && ma<=max(a,b))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        
        
    }
}