#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
vector< int > v[100000];
bool vis[1000000];
int coun=1;
int main()
{
    IOS
    //n==1
    ll n;
    cin>>n;
    if(n<=2)
    {
        cout<<1;
        return 0;
    }
    if(n%4==0 || (n+1)%4==0)
    {
        cout<<0;
        return 0;
    }
    cout<<1;
}