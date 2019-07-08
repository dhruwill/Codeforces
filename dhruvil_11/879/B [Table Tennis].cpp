#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
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
    int n;
    ll k;
    cin>>n>>k;
    int a[n];
    int max=0,in;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(max<a[i])
        {
            max=a[i];
            in=i;
        }
    }
    if(k>=n-1)
    {
        cout<<max;
        return 0;
    }
    //vector<int>v;
    int curr=0;
    int y=0;
    for(int i=1;i<in;i++)
    {
        if(a[curr]>a[i])
        {
            y++;
            if(y==k)
            {
                cout<<a[curr];
                return 0;
            }
        }
        else
        {
            y=1;
            curr=i;
        }
    }
    cout<<max;
    
    
}
