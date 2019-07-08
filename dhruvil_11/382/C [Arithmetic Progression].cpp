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
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<-1;
        return 0;
    }
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    ll d;
    if(n>2){
    for(int i=1;i<n-1;i++)
    if(a[i]-a[i-1]==a[i+1]-a[i])
    {
        d=a[i]-a[i-1];
        break;
    }}
    else
    d=a[1]-a[0];
    if(n==3 )
    {
        if(a[1]-a[0]>a[2]-a[1])
        d=a[2]-a[1];
        else
        d=a[1]-a[0];
    }
    //cout<<d<<endl;;
    /*if(!d)
    {
        cout<<0;
        return 0;
    }
    */
    vector< ll >v;
    int x=0;
   // cout<<d<<endl;
   if(d==0 && a[0]==a[n-1])
   {
       cout<<1<<endl;
       
       cout<<a[0];return 0;
       
   }
   else if(d==0 && a[0]!=a[n-1])
   {
       cout<<0;
       return 0;
   }
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]<d)
        {
            cout<<0;
            return 0;
        }
        if(a[i]-a[i-1]!=d)
        {
            x++;
            if(2*d==a[i]-a[i-1])
            {
                v.pb(a[i]-d);
            }
            else
            {
                cout<<0;
                return 0;
            }
        }
        
    }
    if(x==1)
    {
        cout<<1<<endl;
        cout<<v[0];
        return 0;
    }
    if(x>1)
    {
        cout<<0;
        return 0;
    }
    if(x==0)
    {
        if(n==2 && d%2==0)
        {
            cout<<3<<endl;
            cout<<a[0]-d<<" "<<a[0]+d/2<<" "<<a[1]+d;
            return 0;
        }
        else
        {
            cout<<2<<endl;
            cout<<a[0]-d<<" "<<a[n-1]+d;
        }
    }
}
    
    