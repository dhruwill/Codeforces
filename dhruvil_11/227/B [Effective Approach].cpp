#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int b[100001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        b[a]=i+1;
    }
    int m;ll d=0,e=0;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int c;
        cin>>c;
        d+=b[c];
        e+=n-b[c]+1;
    }
    cout<<d<<" "<<e;
}
    