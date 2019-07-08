#include <bits/stdc++.h>
#define pb push_back
using namespace std;
set <int > s;
bool vis[100001];
int q[100000],t=0,r=0;
int qq[100000],r1=0;
vector < int  > v[100001];
void bfs()
{
    
   // q[r++]=1;
    vis[1]=1;
    s.insert(1);
    set <int > :: iterator itr; 
    while(!s.empty())
    {
        itr = s.begin();
        int p = *itr;
        cout<<p<<" ";
        s.erase(*itr);
        for (int i =0;i<(int)v[p].size();i++) 
        {
            if(!vis[v[p][i]])
            {
                vis[v[p][i]]=1;
                s.insert(v[p][i]);
            }
        }
        
    }
    
    
}

int main()
{
	int n,m;
	cin>>n>>m;
	while(m--)
	{
	    int a,b;
	    cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);

	}
	bfs();
}