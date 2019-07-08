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
int main()
{
    IOS
    //n==1
    int n,k;
    cin>>n>>k;
    int cnt=0;
    int  l =1,r=n;
    int ans=0;
    map<int,int>m;
    if(k==1)
    {
        for(int i=1;i<=n;i++)
            cout<<i<<" ";
        return 0;
    }
    for(;;)
    {
        if(ans-1==k-1)
        {
            for(int i = r;i>=1;i--)
                if(!m[i])
                    cout<<i<<" ";
                return 0;
        }
        cout<<l<<" ";
        m[l]=1;
        l++;
        ans++;
        if(ans-1==k-1)
        {
            for(int i = l;i<=n;i++)
                if(!m[i])
                    cout<<i<<" ";
                return 0;
        }
        cout<<r<<" ";
        m[r]=1;
        r--;
        ans++;
    }
}