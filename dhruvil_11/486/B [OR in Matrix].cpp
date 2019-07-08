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
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {cin>>b[i][j];a[i][j]=-1;}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i][j]==0){
            for(int k=0;k<m;k++)
            a[i][k]=0;
            for(int k=0;k<n;k++)
            a[k][j]=0;}
            
        }
    }
   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }*/
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if(a[i][j]==-1)
    a[i][j]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int r=0;
            
            
                for(int k=0;k<m;k++)
                if(a[i][k]!=0)
                r=1;
                for(int k=0;k<n;k++)
                if(a[k][j]!=0)
                r=1;
                if((!b[i][j] && r) ||(b[i][j] && !r))
                {
                    cout<<"NO";
                    return 0;
                }
                
                
            
        }
    }cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    
    {for(int j=0;j<m;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;}
    //int hh=0^1;
    //cout<<hh;
}
    