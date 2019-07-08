#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
//vector< int > v[100000];
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool vis[1000000];
int coun=1;
int main()
{
    IOS
    //n==1
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(x>y)
    {
        cout<<n;
        return 0;
    }
    int x1=0;
    for(int i=0;i<n;i++)
    if(a[i]<=x)
    x1++;
    cout<<ceil((double)x1/2);
}