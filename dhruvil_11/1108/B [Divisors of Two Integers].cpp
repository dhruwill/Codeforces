#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define f first
#define s second
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    IOS
    //n==1
    ll n;
    cin>>n;
    ll a[n];
    map<ll , ll>m;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
    sort(a,a+n);
    ll max;
    for(int i=0;i<n-1;i++)
    {
        if(m[a[i]]==2 && a[n-1]%a[i]==0)
            max=a[i];
        else if(a[n-1]%a[i]!=0)
            max=a[i];
    }
    cout<<max <<" "<<a[n-1];
    
}