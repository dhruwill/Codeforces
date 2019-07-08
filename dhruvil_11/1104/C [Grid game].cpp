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
    int a[4][4]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            int xx=0;
            for(int j=0;j<4;j++){xx=0;
            for(int k=0;k<3;k++)
            {
                if(a[j][k]==0 && a[j][k+1]==0)
                {
                    a[j][k]=a[j][k+1]=1;xx=1;
                    cout<<j+1<<" "<<k+1<<endl;
                    break;
                }
            }
            if(xx)
            break;}
        }
        if(s[i]=='0')
        {
            int xx=0;
            for(int k=0;k<4;k++){xx=0;
            for(int j=0;j<3;j++)
            {
                if(a[j][k]==0 && a[j+1][k]==0)
                {
                    a[j][k]=a[j+1][k]=1;xx=1;
                    cout<<j+1<<" "<<k+1<<endl;
                    break;
                }
            }
            if(xx)
            break;}
        }
        for(int j=0;j<4;j++)
        {
            int xx=0;
            for(int k=0;k<4;k++)
            {
                if(a[j][k]==1)
                xx++;
                if(xx==4)
                {
                    a[j][0]=a[j][1]=a[j][2]=a[j][3]=0;
                }
            }
        }
        for(int j=0;j<4;j++)
        {
            int xx=0;
            for(int k=0;k<4;k++)
            {
                if(a[k][j]==1)
                xx++;
                if(xx==4)
                {
                    a[0][j]=a[1][j]=a[2][j]=a[3][j]=0;
                }
            }
        }
    }
}
