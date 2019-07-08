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
    int n;
    cin>>n;
    float a[n];
    double max=-1000000;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            if(a[i]>max)
            max=a[i];
            continue;
        }
        if(floor(sqrt(a[i]))!=ceil(sqrt(a[i])))
        {
            if(a[i]>max)
            max=a[i];
        }
        
    }
    if(max==-1000000)
    cout<<-1000000;
    else
    cout<<max;
    
}