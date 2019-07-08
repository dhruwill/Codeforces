
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
/*vector< int > v[1000000];
bool vis[1000000];
int coun=1;
void bfs(int s,int x)
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
void dfs(int s)
{
    vis[s]=true;
    for(int i=0;i<v[s].size;i++)
    if(!vis[v[s][i]])
    dfs(v[s][i]);
}*/
int main()
{
    IOS
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector< ll > v;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.pb(a);
    }
    sort( v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );
    for(int i=0;i<k;i++)
    {
        if(i==0)
        cout<<v[0]<<endl;
        else if(i>=v.size())
        cout<<0<<endl;
        else 
        cout<<v[i]-v[i-1]<<endl;
    }
    
}
  
