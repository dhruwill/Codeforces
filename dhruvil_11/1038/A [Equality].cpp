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
    string s;
    cin>>s;
    ll c[26]={0};
    ll d=0;
    for(int i=0;i<n;i++)
    {
        c[s[i]-'A']++;
    }sort(c,c+k);
    for(int i=0;i<k;i++)
    {
        if(c[i]==0)
        {
            cout<<0;
            return 0;
        }
    }
    cout<<c[0]*k;
}