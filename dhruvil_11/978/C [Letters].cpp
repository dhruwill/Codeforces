#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
int main()
{
    IOS
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    ll i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0)
        a[i]+=a[i-1];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        
    }
    for(i=0;i<m;i++)
    {
            ll l=0,h=n-1,x;

        while(l<=h)
        {
             x=(l+h)/2;
            if(a[x]==b[i])
            {
                cout<<x+1<<" ";
                if(x==0)
                cout<<b[i]<<endl;
                else
                cout<<b[i]-a[x-1]<<endl;
                break;
            }
            else if(a[x]<b[i])
            {
                l=x+1;
                
            }
            else
            h=x-1;
        }
        if(a[x]>b[i])
        {cout<<x+1<<" ";
            if(x==0)cout<<b[i]<<endl;
            else
            cout<<b[i]-a[x-1]<<endl;}
            else if (a[x]<b[i]){
                cout<<x+2<<" "<<b[i]-a[x]<<endl;
            
            }
    }
}