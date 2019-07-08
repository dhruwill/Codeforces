#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define f first
#define s second
#define p 1000000007
using namespace std;
/*vector< int > v[1001];
//vis[1001];
void dfs(int s,int m)
{
    vis[s]=true;
    for(int i=0;i<v[s].size();i++)
    {
        if(!vis[v[s][i]])
        {
            m++;
            dfs(v[s][i],m);
        }
    }
    return m;
}*/
int main()
{
    IOS
    string s;
    
    cin>>s;
    if(s.length()<4)
    {
        cout<<0;
        return 0;
    }
    vector< ll >v;
    for(int i=0;i<s.length()-3;i++)
    {
        
        //cout<<s1<<endl;
        if(s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r')
        {
            v.pb(i);
           // cout<<i<<endl;
            
            i+=3;
            
        }
    }
    ll ans=0;
    if((int)v.size()==0)
    {
        cout<<0;
        return 0;
    }
    ans+=(v[0]+1)*(s.length()-v[0]-3);
   // cout<<ans;
    for(int i=1;i<(int)v.size();i++)
    ans+=(v[i]-v[i-1])*(s.length()-v[i]-3);
    cout<<ans;
    
}