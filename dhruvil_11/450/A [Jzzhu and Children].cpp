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
//const double pi = 2 * acos(0.0);
int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    int a[n+1];int max=0,index=n;
    frep(i,n)
    {
        cin>>a[i];
        if(a[i]>m)
        {
            int c=a[i]/m;
            if(a[i]%m)
            c+=1;
            if(max==c)
            {
                index=i;
            }
            else if(max<c)
            {
                max=c;
                index=i;
            }
        }
        
    }
    cout<<index;
}
        