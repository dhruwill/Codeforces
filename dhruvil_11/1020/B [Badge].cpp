#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int a[1001];
int main()
{
    IOS
    int n;
    cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++)
    cin>>p[i];
    for(int i=1;i<=n;i++)
    {a[i]++;int found=0;int j=i;
    while(found!=1)
    {
        a[p[j]]++;
        j=p[j];
        if(a[j]==2)
        {
            cout<<j<<" ";
            found=1;
        }
    }
    for(int t=1;t<=n;t++)
    a[t]=0;
    }
}