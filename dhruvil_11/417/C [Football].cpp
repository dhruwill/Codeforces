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
    if(k>=n-k)
    {
        cout<<"-1";
        return 0;    
    }
    cout<<n*k<<endl;
    for(int i=1;i<=n;i++)
    {
        int cnt=k;
        for(int j=i+1;j<=n && cnt;j++)
        {
            cout<<i<<" "<<j<<endl;
            cnt--;
        }
        for(int j=1;j<=n && cnt;j++)
        {
            cout<<i<<" "<<j<<endl;
            cnt--;
        }
    }
}