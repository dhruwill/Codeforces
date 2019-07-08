#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define f first
#define s second
//#define p 1000000007
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
    IOS
    int n,d,ans=0;
    cin>>n>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int in=-1;
        for(int j=i+1;j<s.length();j++)
        {
            if(j-i<=d && s[j]=='1')
                in=j;
        }
        if(in>0)
        {i=in-1;ans++;}
        else
        {
            cout<<-1;
            return 0;
        }
        if(in==s.length()-1)
        {
            cout<<ans;
            return 0;
        }
    }
    cout<<-1;

}