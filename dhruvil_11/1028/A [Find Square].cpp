#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//if(n==1)
int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<m;j++)
        {
           cin>>a[i][j];
           
        }
        
    }int ir=0,ic=0,mc=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='B')
            {
                ir=i+1;
                c++;d=1;
                if(c==1)
                ic=j+1;
                mc=j+1;
            }
        }
        if(d==1)
        break;
    }
    cout<<(2*ir+c-1)/2<<" "<<(ic+mc)/2;
    
}