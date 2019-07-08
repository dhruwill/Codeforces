#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
#define endl "\n"
int main()
{
    IOS
    //n==1
    int n,k;
    cin>>n>>k;
    int a[n];
    int ans=0,cnt=1;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            cnt++;
        }
        else
        {
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    ans=max(ans,cnt);
    cout<<ans;
}