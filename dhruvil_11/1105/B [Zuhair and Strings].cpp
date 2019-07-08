#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define f first
#define s second
#define p 1000000007
using namespace std;
/*vector< int > v[1001];
//bool vis[1001];
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
    string s;
    int n,k;
    cin>>n>>k;
    cin>>s;
    int a[26]={0};
    int c=1;
    if(k==1)
    {
        for(int i=0;i<n;i++)
        a[s[i]-'a']++;
    }
    else
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
            if(c==k)
            {a[s[i]-'a']++;
            i++;c=1;}
        }
        else
        {
            c=1;
        }
    }
    int max=0;
    for(int i=0;i<26;i++)
    if(max<a[i])
    max=a[i];
    cout<<max;
    
}