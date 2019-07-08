
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
vector< int > v[1000000];
bool vis[1000000];
int coun=1;
void dfs(int s,int x)
{
   
     queue<int>q;
     q.push(s);
     vis[s]=true;
     while(!q.empty())
     {
         int p=q.front();
         q.pop();
         
         if(coun==x)
         return ;
         for(int i=0;i<v[p].size();i++)
         {
             if(!vis[v[p][i]])
             {
                vis[v[p][i]]=true;
                coun++;
                if(coun==x)
                return;
                q.push(v[p][i]);
             }
         }
     }
    
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    char a[n][m];
    int b[n][m];
    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            b[i][j]=x;
            x++;
            
        }
    }
    x=0;
    int xx,yy;
    if(k==0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!='#')
            {
                x++;
                //cout<<i<<j<<endl;
                if(i+1 <n  && a[i+1][j]!='#')
                {
                    v[b[i][j]].pb(b[i+1][j]);
                }
                if(i-1 >= 0  && a[i-1][j]!='#')
                {
                    v[b[i][j]].pb(b[i-1][j]);
                }
                if(j+1 <m && a[i][j+1]!='#')
                {
                    v[b[i][j]].pb(b[i][j+1]);
                }
                if(j-1 >= 0  && a[i][j-1]!='#')
                {
                    v[b[i][j]].pb(b[i][j-1]);
                }
                xx=i;yy=j;
            }
        }
    }
    x=x-k;
    //cout<<x;
    dfs(b[xx][yy],x);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!='#' && !vis[b[i][j]])
            a[i][j]='X';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
}
  
