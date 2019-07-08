#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(i+1==k)
        {
            cout<<a[i]<<" "<<a[i];
            return 0;
        }
    }
    cout<<-1;
}