#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int n;
    cin>>n;
    ll a[n];
    ll i;
    for(i=0;i<n;i++)
    {cin>>a[i];
    if(a[i]%2==0)
        cout<<a[i]-1<<" ";
    else
        cout<<a[i]<<" ";
    }
}
