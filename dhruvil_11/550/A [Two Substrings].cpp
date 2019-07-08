#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
vector< int > v[200001];
bool vis[200001];
int coun=1;
int level[200001];
int con[100001];
bool pos[100001];
void bfs()
{
   
     queue<int>q;
     q.push(1);
     level[1]=1;
     vis[1]=true;
    // con[0]=a[0];
     //int ans=0;
     while(!q.empty())
     {
         int p=q.front();
         q.pop();
         
       //  int x=0;
         for(int i=0;i<(int)v[p].size();i++)
         {
             if(!vis[v[p][i]])
             {
                vis[v[p][i]]=true;
                level[v[p][i]]=level[p]+1;
                q.push(v[p][i]);
                
             }
             
         }
         
     }
     
    
}
void dfs(int s)
{
    vis[s]=true;
    for(int i=0;i<v[s].size();i++)
    if(!vis[v[s][i]])
    dfs(v[s][i]);
}
int main()
{
    IOS
    string s;
    cin>>s;
    int f=0;
    int in=-1;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            in=i+1;
            break;
        }
        
    }
    //cout<<in;
    if(in!=-1)
    for(int i=in+1;i<s.length();i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            cout<<"YES";
            return 0;
        }
    }
    in=-1;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            in=i+1;
            break;
        }
        
    }
    if(in!=-1)
    for(int i=in+1;i<s.length();i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
    