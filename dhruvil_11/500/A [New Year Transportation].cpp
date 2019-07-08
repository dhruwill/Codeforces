#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
vector< int > v[100000];
bool vis[100000];
int coun=1;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=1;i<n;i++)
    cin>>a[i];
    int x=1;
    while(x<n)
    {
        if(x==t)
        {
            cout<<"YES";
            return 0;
        }
        if(x<n)
        x=x+a[x];
    }
    if(x==t)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}