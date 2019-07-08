#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
vector< int > v[100000];
bool vis[1000000];
int coun=1;
int main()
{
    int n;
    cin>>n;
    ll a[n];
    map< ll , ll>m;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]=i+1;
    }
    //sort(a,a+n);
    ll b[32];
    b[0]=1;
    for(ll i=1;i<=31;i++)
    b[i]=2*b[i-1];
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            for(int j=0;j<32;j++)
            {if(b[j]!=2*a[i] && m[b[j]-a[i]]>0 )
            {vis[i]=true;vis[m[b[j]-a[i]]-1]=true;
            //cout<<i<<" "<<m[b[j]-a[i]]<<endl;
            }
            if(b[j]==2*a[i])
            if(m[a[i]]!=i+1)
            {vis[i]=true;vis[m[a[i]]-1]=true;
            
            //cout<<i<<" "<<m[b[j]-a[i]]<<endl;
                
            }}
        }
    }
    int c=0;
    for(int i=0;i<n;i++)
    if(!vis[i])
    c++;
    cout<<c;
    
}
    