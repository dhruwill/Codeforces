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
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            cout<<"#";
            else if(i%2!=0 && (i-1)%4==0) 
            {
                if(j!=m-1)
            cout<<".";
            else 
            cout<<"#";}
             else if(i%2!=0 && (i-1)%4!=0) 
            {
                if(j==0)
            cout<<"#";
            else 
            cout<<".";}
        }
        cout<<endl;
    }
}