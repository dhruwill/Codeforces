#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    //n==1
    ll n;
    cin>>n;
    ll c=1;ll d=0;
    while(c<=n)
    {
        c*=2;d++;
    }
    cout<<d;
}