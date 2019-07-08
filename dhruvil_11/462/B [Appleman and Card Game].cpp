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
    int n,k;
    cin>>n>>k;
    ll c[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    c[s[i]-'A']++;
    sort(c,c+26);
    ll ans=0;
    for(int i=25;i>=0;i--)
    {
        if(k-c[i]>=0)
        {
            
            k-=c[i];
            ans+=pow(c[i],2);
        }
        else if(c[i]>=k)
        {
            ans+=pow(k,2);
            k=0;
            break;
        }
    }
    
    ans+=pow(k,2);
    cout<<ans;
    
    
    
}