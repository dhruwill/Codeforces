#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool sortinrev(const pair<int,int> &a, 
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

int main()
{
    IOS
    ll n,x;
    cin>>n>>x;
    ll c[n];
    for(ll i=0;i<n;i++)
    cin>>c[i];
    ll sum=0;
    sort(c,c+n);
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        sum+=c[i]*x;
        else
        {
            if(x>1)
            {
                x--;
                sum+=c[i]*x;
            }
            else
            {
                sum+=c[i];
            }
        }
    }
    cout<<sum;
}