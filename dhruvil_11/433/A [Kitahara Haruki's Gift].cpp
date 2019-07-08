#include<bits/stdc++.h>
using namespace std;
#define pi pair<ll,ll>
#define pb push_back
#define eb emplace_back
#define rep(i,n) for(int i=0;i<n;i++)
#define frep(i,n) for(int i=1;i<=n;i++)
#define vll vector <pair < ll ,ll> >
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define watch(x) cout << (#x) << " is " << (x) << endl;
int main()
{
    IOS
    int n;
    cin>>n;
    map< int ,int> m;
    m.clear();
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }//cout<<m[100]<<" "<<m[200];
    if(m[100]%2!=0)
    {
        cout<<"NO";
        return 0;
    }
    else if(m[200]%2!=0 && m[100]==0)
    {
        cout<<"NO";return 0;
    }
    else
    cout<<"YES";
}