#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,q;
    cin>>n>>q;
    while(q--)
    {
        ll x,y;
        ll n2=pow(n,2);
        ll k=0;
        cin>>x>>y;
        if(n%2!=0)
        {if((x+y)%2==0)
        {
            cout<<(x-1)*(n/2+n%2)+(y/2+y%2)-(x-1)/2<<endl;
        }
        else
        {
            cout<<n2/2+1+(x-1)*(n/2+1)-(x)/2+(y/2+y%2)<<endl;
        }}
        else
        {
            if((x+y)%2==0)
            {
                cout<<(x-1)*(n/2)+(y/2+y%2)<<endl;
            }
            else
            {
                cout<<n2/2+(x-1)*(n/2)+(y/2+y%2)<<endl;
            }
        }
    }
    
}